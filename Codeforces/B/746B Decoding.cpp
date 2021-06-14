#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    string s; cin >> s;

    if (n % 2 == 0){
        for (int i = s.size() - 2; i >= 0; i -= 2)
        {
            cout << s[i];
        }
        for (int i = 1 ; i < s.size(); i += 2)
        {
            cout << s[i];
        }

    }
    else{
        for (int i = s.size() - 2; i > 0; i -= 2)
        {
            cout << s[i];
        }
        for (int i = 0 ; i < s.size(); i += 2)
        {
            cout << s[i];
        }
        
    }
}