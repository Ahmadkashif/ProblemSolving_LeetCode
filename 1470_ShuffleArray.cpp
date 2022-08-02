#include <iostream>
#include <vector>

using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> result;
    int *ptr1 = &nums[0], *ptr2 = &nums[n];
    for (int i = 0; i < n; i++)
    {
        result.push_back(*ptr1);
        result.push_back(*ptr2);
        ptr1++;
        ptr2++;
    }
    return result;
}

int main()

{
    return 0;
}