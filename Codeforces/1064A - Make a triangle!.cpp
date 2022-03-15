#include <bits/stdc++.h>
using namespace std;


int main(void){
    int result = 0;
    array <int, 3> arr;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    while (result + arr[0] + arr[1] <= arr[2]){
        result ++;
    }
    cout << result;
    
    

}