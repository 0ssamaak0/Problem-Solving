#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    string s; cin >> s;
    int sum = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i + 1]){
            sum ++;
        }
    }
    cout << sum << "\n";
}