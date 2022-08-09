class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int contentChildren = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for(int cGreed: g){
            for(int i = 0; i < s.size(); i++){
               if(cGreed <= s[i]){
                   contentChildren++;
                   s[i] = -1;
                   break;
               }
            }
            
        }
        return contentChildren;
    }
};