#include<bits/stdc++.h>
using namespace std;


int main(void){
    int t; cin >> t;
    int n;

    for (int i = 0; i < t; i++)
    {
        int freq[11] = {0};
        int modes[10001] = {0};
        cin >> n ;
        int input;
        for (int j = 0; j < n; j++)
        {
            cin >> input;
            freq[input] ++;
        }
        for (int j = 0; j < 11; j++)
        {
            if(freq[j] != 0){
                modes[freq[j]] ++ ;
            }
        }
        int maximum = 0;
        int printed;
        for (int j = 1; j < 10000; j++)
        {
            if(modes[j] > maximum){
                maximum = modes[j];
                printed = j;
            }
        }
        cout << printed << "\n";
     
    }

}