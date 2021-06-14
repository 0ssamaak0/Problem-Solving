#include<bits/stdc++.h>
using namespace std;
 
 
int main(void){
    int n; cin >> n;
    int k; cin >> k;
    
    int arr[100];
    int result = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int temp = arr[i];
        int rem = 10;
        int sum = 0;
        while(temp != 0){
            if(temp % 10 == 4 || temp % 10 == 7){
                sum ++;
            }      
            temp /= 10;
        }
        if (sum <= k){
            result ++;
        }
    }
    cout << result << "\n";
 
}