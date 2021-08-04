#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main()
{
	float x1, x2, y1, y2, x3, y3, a, b, c;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	a = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
	b = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	c = sqrt(pow(abs(x3 - x2), 2) + pow(abs(y3 - y2), 2));



	if (a + b <= c || b + c <= a || a + c <= b)
	{
		cout << "It is not triangle" << endl;
		return 0;
	}

	float p = (a + b + c) / 2;
	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Triangle's area is " << S << endl;
	return 0;
}

