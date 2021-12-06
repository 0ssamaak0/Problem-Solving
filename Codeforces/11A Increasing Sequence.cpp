#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, d;
    cin >> n >> d;
    int arr[2000];
    int temp1;
    int temp2;
    int moves = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = n - 1; j > 0; j--)
        {
            
            if(arr[j] < arr[j - 1]){
                temp1 = ceil((double) (arr[j - 1] - arr[j]) / d);
                arr[j] += temp1 * d;
                moves += temp1;
            }
            else if(arr[j] == arr[j - 1]){
                arr[j] += d;
                moves ++;
            }
        }
        
    }
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = n - 1; j > 0; j--)
        {
            
            if(arr[j] < arr[j - 1]){
                temp1 = ceil((double) (arr[j - 1] - arr[j]) / d);
                arr[j] += temp1 * d;
                moves += temp1;
            }
            else if(arr[j] == arr[j - 1]){
                arr[j] += d;
                moves ++;
            }
        }
        
    }
    
    cout << moves << "\n";
}