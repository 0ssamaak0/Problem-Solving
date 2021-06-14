#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    int xin, yin, zin;
    while (n--){
        cin >> xin; x += xin;
        cin >> yin; y += yin;
        cin >> zin; z += zin;
    }
    if (x == 0 && y == 0 && z == 0){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";

    }
}