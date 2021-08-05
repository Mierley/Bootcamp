stepic#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	int n, INF = 111;
	cin >> n;
	vector < vector<int> > a(n, vector <int>(n, 0));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	vector < vector<int> > d((1 << n), vector <int>(n, INF));

	d[0][0] = 0;

	for (int mask = 0; mask < (1 << n); mask++)
	{
		for (int i = 0; i < n; i++)
		{
			if (d[mask][i] == INF)
				continue;

			for (int j = 0; j < n; j++)
			{
				if (!(mask & (1 << j)))
					d[mask ^ (1 << j)][j] = min(d[mask ^ (1 << j)][j], d[mask][i] + a[i][j]);
			}
		}

	}
	cout << d[(1 << n) - 1][0] << endl;
}

