class Solution {
public:
    string defangIPaddr(string address) {
        for (int i = address.size() - 2; i >= 0; i--)
            if (address[i + 1] == '.')
                address = address.substr(0, i + 1) + "[.]" + address.substr(i + 2);
        return address;
    }
};