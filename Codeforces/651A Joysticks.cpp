#include<bits/stdc++.h>
using namespace std;


int main(void){
    int a; cin >> a;
    int b; cin >> b;
    int sum = 0;

    
    while(a > 0 && b > 0){
        if(a == b){
            if (a == 1){
                break;
            }
        }
        if(a > b){
            a -= 2;
            b ++;
        }
        else{
            a ++;
            b -= 2;
        }

        sum ++;
    }
    cout << sum << "\n";


}