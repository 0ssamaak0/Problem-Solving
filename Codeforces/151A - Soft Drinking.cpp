#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = (k * l) / nl;
    int limes = (c * d);
    int salt = p / np;

    int result = min(min(drinks, limes), salt) / n;
    cout << result << "\n";
}