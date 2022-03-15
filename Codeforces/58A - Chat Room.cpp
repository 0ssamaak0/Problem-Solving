#include<bits/stdc++.h>
using namespace std;


int main(void){
    string s; cin >> s;
    int cnt = 0;
    int i = 0;
    while (i < s.size())
    {
        if(s[i] == 'h' && cnt == 0){
            cnt ++;
        }
        if (s[i] == 'e' && cnt == 1){
            cnt ++;
        }
        if(s[i] == 'l' && (cnt == 2 || cnt == 3)){
            cnt ++;
        }
        if(s[i] == 'o' && cnt == 4){
            cnt ++;
        }
        i++;
    }
    if (cnt == 5){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    
    
    


}