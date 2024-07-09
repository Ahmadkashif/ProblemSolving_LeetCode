class Solution {
public:
    double average(vector<int>& salary) {
        double result = 0;
        int n = salary.size() - 2;
        sort(salary.begin(), salary.end());
        for(int i = 1; i < salary.size() - 1; i++){
            result += salary[i];
        }

        return result/n;
    }
};