#include<bits/stdc++.h>
using namespace std;
 
 
int main(void){
    int t; cin >> t;
 
    for (int i = 0; i < t; i++)
    {
        string a, b, c;
        cin >> a >> b >> c;
        bool yes = true;
 
        for (int j = 0; j < a.size(); j++)
        {
            if (c[j] != b[j] && c[j] != a[j]){
                yes = false;
            }
        }
        if (yes == true){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
    
 
 
}