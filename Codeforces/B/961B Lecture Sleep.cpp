#include<bits/stdc++.h>
using namespace std;


int a[100000], t[100000], prefix[100000];

int main(void){
    int n; cin >> n;
    int k; cin >> k;

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        if (t[i]){
            sum += a[i];
            a[i] = 0;
        }
    }
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }

    int maximum = prefix[k - 1];
    for (int i = 1; i < n; i++)
    {
        maximum = max(maximum, prefix[i + k - 1] - prefix[i - 1]);
    }
    sum += maximum; 
    cout << sum << "\n";
    
    
    
    
    


}