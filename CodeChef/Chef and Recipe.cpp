#include<bits/stdc++.h>
using namespace std;


int main(void){
    int t; cin >> t;
    int n;

    for (int i = 0; i < t; i++)
    {
        int freq[1001] = {0};
        cin >> n;
        int temp;
        int last = -5;
        int done = 0;
        
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            if (freq[temp] != 0 && last != temp){
                done = 1;
            }
            freq[temp] ++;
            last = temp;
        }
        if (done == 1){
            cout << "NO\n";
            continue;
        }
        for (int j = 0; j < 1000; j++)
        {
            for (int k = 0; k < 1000; k++)
            {
                if (j != k){
                    if (freq[j] == freq[k] && freq[j] != 0){
                        cout << "NO\n";
                        done = 1;        
                        break;
                    }
                }
            }
            if (done == 1){
            break;
        }
            
        }
        if (done == 1){
            continue;
        }
        cout << "YES\n";
    }

}