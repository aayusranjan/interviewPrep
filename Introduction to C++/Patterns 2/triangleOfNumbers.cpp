/*
Print the following pattern for the given number of rows.
Pattern for N = 4
---1
--232
-34543
4367654
The (-) represent spaces.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int currRow = 1;
    while (currRow <= n)
    {
        int spaces = 1;
        while (spaces <= n - currRow)
        {
            cout << " ";
            spaces++;
        }
        int currCol = 1;
        int val = currRow;
        while (currCol <= currRow)
        {
            cout << val;
            val++;
            currCol++;
        }
        val = 2 * (currRow - 1);
        while (val >= currRow)
        {
            cout << val;
            val--;
        }
        cout << endl;
        currRow++;
    }
}
