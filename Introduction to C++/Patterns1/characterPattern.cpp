/*
Pattern for N = 4
A
BC
CDE
DEFG
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
        char ch = 'A' + i;
        while (j <= i)
        {
            cout << char(ch + j - 2);
            j++;
        }
        cout << endl;
        i++;
    }
}