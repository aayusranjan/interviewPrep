

#include <iostream>
using namespace std;

int main()
{
    char i;
    cin >> i;
    if (i >= 'a' && i <= 'z')
    {
        cout << "0";
    }
    else if (i >= 'A' && i <= 'Z')
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }
}
