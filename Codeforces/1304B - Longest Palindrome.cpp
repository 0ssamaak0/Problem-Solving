#include <bits/stdc++.h>
using namespace std;



int main(void){
    int n; cin >> n;
    int m; cin >> m;

    string arr[100];
    string arr_copy[100];
    string temp1[100];
    string temp2[100];
    int sum = 0;
    string middles[100];
    int sum_middles = 0;
    bool found;

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr_copy[i] = arr[i];
        reverse(arr_copy[i].begin(), arr_copy[i].end());
    }
    // O(n^3)
    for (int i = 0; i < n; i++)
    {
        found = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j){
                for (int k = 0; k < sum; k++)
                {
                    if (arr[i] == temp2[k]){
                        found = true;
                    }
                }
                if (arr[i] == arr_copy[j] && found == false){
                    temp1[sum] = arr[i];
                    temp2[sum] = arr[j];
                    sum ++;
                }
            }
            else{
                if(arr[i] == arr_copy[j]){
                    middles[0] = arr[i];
                    sum_middles = 1;
                }
            }
        }
        
    }
    cout << sum * (2 * m) +  (sum_middles * m);
    cout << "\n";
    for (int i = 0; i < sum; i++)
    {
        cout << temp1[i];
    }
    cout << middles[0];
    for (int i = sum - 1; i >= 0; i--)
    {
        cout << temp2[i];
    }
    
    

    

}