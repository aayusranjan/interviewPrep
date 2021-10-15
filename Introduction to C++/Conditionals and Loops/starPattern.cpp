#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= i; j++, k++)
        {
            cout << " ";
        }
        while (k != 2 * i - 1)
        {
            cout << "*";
            ++k;
        }
        cout << endl;
    }
    return 0;
}