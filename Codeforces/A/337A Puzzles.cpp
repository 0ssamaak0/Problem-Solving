#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    int m; cin >> m;
    int arr[1000];

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);

    int min = arr[n - 1] - arr[0];;

    for (int i = 0; i < m - 1; i++)
    {
        if (arr[i + n - 1] - arr[i] < min && arr[i + n - 1] - arr[i] >= 0){
            min = arr[i + n - 1] - arr[i];
        }
    }
    cout << min;

    
}