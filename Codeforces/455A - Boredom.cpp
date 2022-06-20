#include <bits/stdc++.h>
using namespace std;

long long arr[100001] = {0};
int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[input]++;
    }

    long long max1 = arr[1];
    long long max2 = 0;

    long long maximum;

    for (int i = 2; i <= 100000; i++)
    {
        maximum = max(max1, i * arr[i] + max2);

        max2 = max1;
        max1 = maximum;
    }

    cout << max1 << "\n";
}