#include <iostream>
using namespace std;

int main()
{
    int N, i, j, k;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        k = i; //val k is equal to i so that can we able to print the value from next not from start agin
        for (j = 1; j <= i; j++, k++)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}