#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s; cin >> s;
    int dang = 0;

    for (int i = 0; i < s.size(); i++)
    {
            if (s[i] == '0'){
                dang ++;
            }
            else{
                dang = 0;
            }
            if (dang >= 7){
                cout << "YES";
                return 0;
            }
    }
    dang = 0;
    for (int i = 0; i < s.size(); i++)
    {
            if (s[i] == '1'){
                dang ++;
            }
            else{
                dang = 0;
                }
            if (dang >= 7){
                cout << "YES";
                return 0;
            }
}      

    
    cout << "NO";
    
}