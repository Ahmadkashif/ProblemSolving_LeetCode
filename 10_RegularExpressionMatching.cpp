//#define LOG

class Solution
{
public:
    struct char_cmp
    {
        bool operator()(const char *a, const char *b) const
        {
            return strcmp(a, b) < 0;
        }
    };
    map<const char *, map<const char *, bool, char_cmp>, char_cmp> dp;
#ifdef LOG
    size_t indent = 0;
    class StIndent
    {
    public:
        size_t &indent;
        StIndent(size_t &i) : indent(i) { ++indent; }
        ~StIndent() { --indent; }
    };
#endif // LOG

#define MEMOIZE_AND_RET(_s, _p, cond) \
    {                                 \
        auto ret = (cond);            \
        dp[_s][_p] = ret;             \
        return ret;                   \
    }

#define CHECK_IF_MEMOIZED(_s, _p)           \
    {                                       \
        auto it = dp.find(s);               \
        if (it != dp.end())                 \
        {                                   \
            auto it2 = it->second.find(_p); \
            if (it2 != it->second.end())    \
                return it2->second;         \
        }                                   \
    }

    bool isMatch(string _s, string _p)
    {
        if (_p.size() == 0)
            return _s.size() == 0;
        return isMatch(_s.c_str(), _p.c_str());
    }

    bool isMatch(const char *s, const char *p)
    {
        const char *_s = s, *_p = p; // store original ptrs.
#ifdef LOG
        StIndent _(indent);
        for (int i = 0; i < indent; ++i)
            cout << '-';
        cout << s << "|" << p << endl;
#endif // LOG
        if (*p == 0)
            return *s == 0;
        CHECK_IF_MEMOIZED(_s, _p);
        if (*(p + 1) == '*')
        {
            if (*s == 0)
            {
                MEMOIZE_AND_RET(_s, _p, isMatch(s, p + 2)); // ('', 'a*b*c*)
            }
            // Example : a*, .*
            // match zero or more instance of *(p)
            char match = 0;
            if (*p == '.')
            { // .*
                match = *s;
            }
            else
                match = *p; // a*
            // while (*s == match) ++s; // zero or more instances of match. NOTE : can't use it for cases like (aaaa, a*a)
            MEMOIZE_AND_RET(_s, _p, (*s == match && isMatch(s + 1, p)) // cases like (aaaab, a*b) or (aaaa, a*a)
                                        || isMatch(s, p + 2)           // cases like (def, a*def)
            );
        }
        else
        { // . and regular match
            MEMOIZE_AND_RET(_s, _p, *s /* case like ('','.') */ && (*p == '.' || *s == *p) && isMatch(s + 1, p + 1));
        }
    }
};