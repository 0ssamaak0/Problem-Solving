#include <iostream>
#include <cmath>
using namespace std;


int main(void){
    int x; cin >> x;
    int rem = (int) pow(8, x % 4) % 10;
    if (rem == 1){
        rem = 6;
    }
    if (x == 0){
        rem = 1;
    }
    cout << rem;
    
}