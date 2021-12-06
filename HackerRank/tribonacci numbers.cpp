#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tribonacci(int n)
{
    if (n == 2 || n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main()
{
    int n;
    cin >> n;
    cout << tribonacci(n);
    return 0;
}