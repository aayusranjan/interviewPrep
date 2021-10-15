#include <iostream>
using namespace std;

int main()
{
    int S, W, E, i, celsius;
    cin >> S >> E >> W;
    for (i = S; i <= E; i += W)
    {
        celsius = (i - 32) / 1.8;
        cout << i << "\t" << celsius << "\n";
    }
}