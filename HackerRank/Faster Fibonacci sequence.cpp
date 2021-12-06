#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long fibonacci(int n)
{
    long long *fibs = new long long[n * sizeof(long long)];
    fibs[0] = 0;
    fibs[1] = 1;
    for (int i = 2; i < n + 1; i++)
    {
        fibs[i] = fibs[i - 1] + fibs[i - 2];
    }
    long long tbprinted = fibs[n];
    delete[](fibs);
    return tbprinted;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}