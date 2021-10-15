#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int i = 0;
    int sum = 0;
    while (i <= N)
    {
        if ((i % 2) == 0)
        {
            sum += i;
        }

        i++;
    }
    cout << sum;
}