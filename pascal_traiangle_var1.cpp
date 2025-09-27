#include <bits/stdc++.h>
using namespace std;

int count_pascal(int n, int r)
{
    int n_fact = 1, r_fact = 1, n_r_fact = 1;

    for (int i = 1; i <= n; i++)
        n_fact *= i;
    for (int i = 1; i <= r; i++)
        r_fact *= i;
    for (int i = 1; i <= n - r; i++)
        n_r_fact *= i;

    return n_fact / (r_fact * n_r_fact);
}

int count_pascal_optimized(int n, int c, int r)
{

    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    r = min(r, n - r); // symmetry

    long long result = 1;

    for (int i = 0; i < r; i++)
    {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main()
{
    int n = 5;
    int r = 5;
    int c = 3;

    cout << count_pascal(n, r);
    cout<<endl;
    cout << count_pascal_optimized(n, c, r);

    return 0;
}
