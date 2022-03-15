#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    int n;
    int arr[50];
    int sum;

    for (int i = 0; i < t; i++)
    {   sum = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] == 1 || arr[j] == 3){
                sum ++;
            }
        }
        cout << sum << "\n";
    }
    
}