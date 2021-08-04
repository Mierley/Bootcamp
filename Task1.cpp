#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, D;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0)
        cout << "There is no decision";

    else if (D == 0)
        cout << "Answer is " << (-b) / 2 * a;

    else
        cout << "Answer is " << (-b + sqrt(D)) / (2 * a) << " and " << (-b - sqrt(D)) / (2 * a);

    return 0;
}
