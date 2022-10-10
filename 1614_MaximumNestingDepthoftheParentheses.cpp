    int maxDepth(string s) {
        int res = 0;
        int depth = 0;
        for(int i =0 ; i < s.size(); ++i)
        {
             if(s[i] == '(')
                ++depth;
            else if(s[i] == ')')
                --depth;
            res = max(depth, res);
        }
    return res;
    }