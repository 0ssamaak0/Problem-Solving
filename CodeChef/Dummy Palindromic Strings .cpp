#include<bits/stdc++.h>
using namespace std;


int main(void){
    int t; cin >> t;
    string s;

    for (int i = 0; i < t; i++)
    {
        int freq_arr[26] = {0};
        int num_odd = 0;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            freq_arr[tolower(s[j]) - 97] ++ ;
        }
        for (int j = 0; j < 26; j++)
        {
            if(freq_arr[j] % 2 != 0){
                num_odd ++;
            }
        }
        if(s.size() % 2 == 0){
            if(num_odd == 2){
                cout << "DPS\n";
                continue;
            }
        }
        else{
            if(num_odd <= 3){
                cout << "DPS\n";
                continue;
            }
            }
        cout << "!DPS\n";   
    }
    
}