#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    int n;
    int k;
    int n2;
    int p;

    for (int  i = 0; i < t; i++)
    {
        p = 0;
        cin >> n >> k;
        if ((n - 1) / 2 < k){
            cout << -1 << "\n";
            continue;
        }
        n2 = n;
        for (int j = 1; j < n + 1; j++)
        {
            if(p < k){
                if (j %2 == 0){
                    cout << n2 << " ";
                    n2 --;
                    p ++;
                    continue;
                }   
            }
            cout << j - p << " ";
        }
        cout << "\n";
    }
    




}