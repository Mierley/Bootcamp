#include <iostream>
#include <cmath>
#include <chrono>
#include <vector>

using namespace std;

int f(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return f(n - 1) + f(n - 2);
}

int f_i(int n)
{
    vector <int> c(n + 1);
    c[0] = 1;
    c[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        c[i] = c[i - 1] + c[i - 2];
    }

    return c[n];
}
int main()
{


    int a;
    cin >> a;

    auto t1 = chrono::high_resolution_clock::now();
    cout << "Our answer taken by recurcive is: " << f(a) << endl;
    auto t2 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::nanoseconds>(t2 - t1).count();
    cout << "Time taken to for calculating the fibonacci number using the recursive method: " << duration << " nanoseconds\n";


    auto u1 = chrono::high_resolution_clock::now();
    cout << "Our answer taken by iteration is: " << f_i(a) << endl;
    auto u2 = chrono::high_resolution_clock::now();
    auto duration_2 = chrono::duration_cast<chrono::nanoseconds>(u2 - u1).count();
    cout << "Time taken to for calculating the fibonacci number using the recursive method: " << duration_2 << " nanoseconds\n";

    return 0;
}
