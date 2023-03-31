// given an array A consisting of N integers, returns the maximum sum of 2 numbers whose digits add up to an equal sum. If there are no two numbers whose digits have an equal sum, the function should return -1.
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int solution(vector<int> &A) {
    unordered_map<int, int> digitSums;
    int maxSum = -1;

    for (int n : A) {
        int currentDigitSum = digitSum(n);

        if (digitSums.find(currentDigitSum) != digitSums.end()) {
            maxSum = max(maxSum, digitSums[currentDigitSum] + n);
            digitSums[currentDigitSum] = max(digitSums[currentDigitSum], n);
        } else {
            digitSums[currentDigitSum] = n;
        }
    }

    return maxSum;
}

