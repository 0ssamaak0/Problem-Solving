#include <bits/stdc++.h>
using namespace std;

int main(void){
    int k; cin >> k;
    if(k > 18 * 2){
        cout << -1 << "\n";
        return 0;
    }
    for (int i = 0; i < k / 2; i++)
    {
        cout << 8;
    }
    if (k % 2 == 1){
        cout << 6;
    }
    

}