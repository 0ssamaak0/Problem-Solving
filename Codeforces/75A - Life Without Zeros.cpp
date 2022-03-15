#include<bits/stdc++.h>
using namespace std;


int main(void){
    int a; cin >> a;
    int b; cin >> b;

    int sum1 = a + b;
    int sum2 = 0;
    int num;

    int weight = 1;
    while(a > 0){
        num = weight * (a % 10);
        a /= 10;
        if(num == 0){
            continue;
        }
        sum2 += num;
        weight *= 10;
    }

    weight = 1;
    while(b > 0){
        num = weight * (b % 10);
        b /= 10;
        if(num == 0){
            continue;
        }
        sum2 += num;
        weight *= 10;
    }
    int result = 0;

    weight = 1;
    while(sum1 > 0){
        num = weight * (sum1 % 10);
        sum1 /= 10;
        if(num == 0){
            continue;
        }
        result += num;
        weight *= 10;
    }

    if(sum2 == result){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }


}