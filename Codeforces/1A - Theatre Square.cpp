#include <iostream>
#include <cmath>
using namespace std;

int main (void){
    int n, m, a;
    cin >> n >> m >> a;

    cout << (long long) (ceil((double) m / a) * ceil((double) n / a));
}