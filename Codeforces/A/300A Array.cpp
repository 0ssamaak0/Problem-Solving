#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;
    int arr[100];

    int neg = 0;
    int pos = 0;
    int pos2;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < 0){
            cout << "1 " << arr[i] << "\n";
            neg = arr[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            cout << "1 " << arr[i] << "\n";
            pos = arr[i];
            pos2 = pos;
            break;
        }
    }
    bool flag = false;
    if(pos == 0){
        cout << "2 ";
        flag = true;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] < 0 && arr[i] != neg){
            cout << arr[i] << " ";
            pos = arr[i];
            break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i] < 0 && arr[i] != neg && arr[i] != pos){
            cout << arr[i] << "\n";
            pos2 = arr[i];
            break;
            }
        }
        
    }

    if(flag){
        cout << n - 3;
    }
    else{
        cout << n -2;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != pos && arr[i] != neg && arr[i] != pos2){
            cout << " " << arr[i];
        }
    }
    
    
}