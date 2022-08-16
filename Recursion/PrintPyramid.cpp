#include <iostream>

using namespace std;

int findStarsForN(int n);

void printRow(int depth, int spaces);

int main()
{
    printRow(2,0);
    return 0;
}

int findStarsForN(int n)
{
    if (n == 0)
        return 1;

    else
        return findStarsForN(n - 1) + 2;
}

void printRow(int depth,int spaces)
{
    int stars = findStarsForN(depth);
    if (depth)
    {
        depth--;
        spaces++; 
        printRow(depth,spaces);
    }
    else
    spaces++;
    
    while (spaces)
    {
        cout << " ";
        spaces--;
    }
    while (stars)
    {
        cout << "*";
        stars--;
    }
    cout << endl;
    return;
    
                                                                                                
}
