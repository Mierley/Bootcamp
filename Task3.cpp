#include <iostream>
#include <cmath>

using namespace std;

int nod(int x, int y)
{
    while (x * y != 0)
    {
        if (x > y) x = x % y;
        else y = y % x;

        cout << " x = " << x << "   y = " << y << endl;
    }
    return x + y;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << nod(a, b);
    return 0;
}

