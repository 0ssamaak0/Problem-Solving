#include<bits/stdc++.h>
using namespace std;


int main(void){
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, n;
        cin >> a >> b >> n;
        bool odd = true;
        int steps = 0;
        int temp1 = max(a, b);
        int temp2 = min(a, b);
        a = temp1;
        b = temp2;
        while(a <= n && b <= n){
            if (!odd){
                a += b;
                steps ++;
                odd = true;
                continue;
            }
            else{
                b += a;
                steps ++;
                odd = false;
            }
        }
        cout << steps << "\n";
    }

}