#include <iostream>

using namespace std;

int power(int base, int &exponent)
{
    return (exponent <= 0 ? 1 : base * power(base, --exponent));
}

int main()
{
    int exp = 3;
    cout << power(2, exp) << endl;
}