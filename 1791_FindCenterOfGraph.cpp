class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int star = edges[0][0], count = 0;
        for (int i = 0 ; i < 2 ; i++){
            for(int j = 0; j < 2; j++){
                if ( edges[i][j] == star )
                    count++;
            }
        }
        if(count == 2)
            return star;
        
        else return edges[0][1];
    }
};