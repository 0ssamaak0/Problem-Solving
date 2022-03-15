#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;
    string s; cin >> s;
    int freqarr[26] = {0};
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(i % 2 == 1){
            if(freqarr[s[i] - 65] > 0){
                freqarr[s[i] - 65] --;
            }
            else{
                count ++ ;
            }
        }
        else{
            freqarr[s[i] - 97] ++;
        }
    }
    cout << count;
}