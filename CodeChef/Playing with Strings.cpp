#include<bits/stdc++.h>
using namespace std;


int main(void){
    int t; cin >> t;
    int n;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int freq1[2] = {0};
        int freq2[2] = {0};
        string temp;

        cin >> temp;

        for (int j = 0; j < n; j++)
        {
            freq1[(int) (temp[j] - 48)] ++;
        }
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            freq2[(int) (temp[j] - 48)] ++;
        }
        if (freq1[0] == freq2[0] && freq1[1] == freq2[1]){
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
     
    }

}