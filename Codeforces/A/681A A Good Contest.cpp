#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;
    string s;
    int befores[100];
    int afters[100];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cin >> befores[i];
        cin >> afters[i];
    }
    for (int i = 0; i < n; i++)
    {
            if(befores[i] >= 2400 && afters[i] > befores[i]){
            cout << "YES\n";
            return 0;
            }
    }
    cout << "NO\n";

}