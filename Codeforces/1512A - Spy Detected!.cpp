#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    int n;
    int temp1;
    int temp2;
    int temp3;
    array <int, 100> arr;

    for (int i = 0; i < t; i++)
    {   
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            if(j == 0){
                temp1 = arr[j];
            }
            else if(j == 1){
                temp2= arr[j];
            }
            else if(j == 2){
                temp3 = arr[j];
            }
        }
        for (int j = 0; j < n; j++)
        {
            {
                if (temp1 == temp2){
                    if (arr[j] != temp1){
                        cout << (j + 1) << "\n";
                        break;
                    }
                }
                if (temp1 == temp3){
                    if (arr[j] != temp1){
                        cout << (j + 1) << "\n";
                        break;
                    }
                }
                if (temp3 == temp2){
                    if (arr[j] != temp3){
                        cout << (j + 1) << "\n";
                        break;
                    }
                }
            }
        }
    }
    
}