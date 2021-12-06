#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;
    int a; cin >> a;
    int b; cin >> b;

    int steps = abs(b);
    while (steps){
        if(b < 0){
            a --;
        }
        else{
            a ++;
        }
        if(a > n){
            a = 1;
        }
        else if(a < 1){
            a = n;
        }
        steps --;
    }
    cout << a << "\n";

    
    
    


}