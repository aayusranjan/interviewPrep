/*
Pattern for N = 3
A
BB
CCC
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}
