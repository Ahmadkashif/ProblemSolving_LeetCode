#include <iostream>

using namespace std;

int getFourDigitRotatedNum(int n)
{
    int bit = n / 1000;
    n = n - ((n / 1000) * 1000);
    n = n * 10 + bit;
    return n;
}
int getThreeDigitRotatedNum(int n)
{
    int bit = n / 100;
    n = n - ((n / 100) * 100);
    n = n * 10 + bit;
    return n;
}
int getSumOf1_100(int n)
{
    return n / 1000 + n % 1000;
}
int getSumOf10_10(int n)
{
    return n / 100 + n % 100;
}
int getSumOf100_1(int n)
{
    return n / 10 + n % 10;
}

int min = 0;

int minimumSum(int num)
{
    for (int i = 0 ; i < 4 ; i++){
        
    }
}
