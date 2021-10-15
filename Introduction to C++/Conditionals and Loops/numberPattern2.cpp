#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = i; j <= n; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++, k++)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}

/* Using while loop:

int main()
{
    int N;
    cin>>N;
    int i = 1;
    while(i <= N){
        int spaces = 1;
        while(spaces <= N){
            cout << " ";
            spaces++;
        }
        int col = 1;
        int value = i;
        while(col <= i){
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        i++;
    }
}
*/