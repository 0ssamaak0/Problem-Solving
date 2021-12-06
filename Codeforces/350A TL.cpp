#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    int m; cin >> m;

    int arrn[100];
    int arrm[100];

    bool condition1 = false;
    bool condition2 = true;
    int v = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arrn[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arrm[i];
    }

    sort(arrn, arrn + n);
    
    for (int i = 0; i < n; i++)
    {
        if (2 * arrn[i] <= arrn[n - 1]){
            condition1 = true;
        }
    }
    v = arrn[n - 1];
    if (condition1 == false){
        v = arrn[0] * 2;
    }
    for (int i = 0; i < m; i++)
    {
        if (arrm[i] <= v){
            condition2 = false;
        }
    }


    if (arrn[n - 1] > 0 && condition2){
        cout << v;
    }
    else{cout << -1;}    
    
    
}