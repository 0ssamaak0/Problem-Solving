#include<bits/stdc++.h>
using namespace std;


int main(void){
    int k, n, w;
    cin >> k >> w >> n;
    int result =  k * ((n * (n + 1)) / 2.0) -  w;
    if (result <= 0){
        cout << "0\n";
    }
    else{
        cout << result << "\n";
    }



}