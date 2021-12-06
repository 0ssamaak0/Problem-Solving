#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverse_string(string s, int n)
{
    if (n == 0)
    {
        return "";
    }
    reverse_string(s.substr(1, n - 1), n - 1);
    cout << s[0];
    return "";
}

int main()
{
    string s;
    cin >> s;
    cout << reverse_string(s, s.length()) << endl;
    return 0;
}