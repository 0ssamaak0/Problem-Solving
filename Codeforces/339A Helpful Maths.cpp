#include<bits/stdc++.h>
using namespace std;


int main(void){
    string s; cin >> s;
    int n[100];
    int length = s.size() / 2;
    n[0] = s[0] - 48;
    int count = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if(i % 2 == 0){
            n[count] = s[i] - 48;
            count ++;

        }
    }
    sort(n, n + count);
    for (int i = 0; i < count - 1; i++)
    {
        cout << n[i] << "+";
    }
    cout << n[count - 1];
    
    


}