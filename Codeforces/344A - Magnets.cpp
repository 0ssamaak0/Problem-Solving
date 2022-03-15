#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    int t1 = 0;
    int t2 = 55;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t1;
        if(t1 != t2){
            sum ++;
        }
        t2 = t1;
    }
    cout << sum;
    
    

}