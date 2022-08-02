#include <iostream>

using namespace std;

int count = 0;

int count_digits(int number)
{
    if (number < 0)
    {
        number *= -1;
    }

    if (number > 10)
        count_digits(number / 10);

    count++;
    // we can skip the 
    return 0;
}

int main()
{

    count_digits(12345);
    cout << count << endl;

}