#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    int arr[1000];
    int ser = 0;
    int dim = 0;
    int counter = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ntemp = n;
    int i = 0;
    while (counter < n + 1)
    {
        if (counter % 2 != 0){
        if (arr[i] >= arr[ntemp - 1]){
            ser += arr[i];
            i ++;
        }
        else if(arr[i] < arr[ntemp - 1]){
            ser += arr[ntemp - 1];
            ntemp --;
        }
        }
        else{
            if (arr[i] >=  arr[ntemp - 1]){
            dim += arr[i];
            i ++;
        }
        else if(arr[i] < arr[ntemp - 1]){
            dim += arr[ntemp - 1];
            ntemp --;
        }
        }
        counter ++;
    }
    cout << ser << " " << dim << "\n";
    
    
    
    

}