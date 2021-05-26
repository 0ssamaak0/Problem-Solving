#include <iostream>
using namespace std;

int main(void){
    int a; cin >> a;
    int b; cin >>b;
    int years = 0;
    while (a <= b){
        a *=3; b*=2;
        years ++;
    }
    cout << years;

}