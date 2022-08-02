#include <iostream>

using namespace std;

int findOddForN(int n);

int main()
{
    cout << findOddForN(4);
    return 0;
}

int findOddForN(int n)
{
    if (n == 0)
        return 1;

    else
        return findOddForN(n - 1) + 2;
}
