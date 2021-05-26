#include <bits/stdc++.h>
using namespace std;

int main(void){
    int t; cin >> t;
    long long x;
    long long y;
    long long a;
    long long b;
    long long pay;

    array <int, 100> arr;

    for (int i = 0; i < t; i++)
    {
        pay = 0;
        cin >> x >> y >> a >> b;
        if (b > 2 * a){
            b = 2 * a;
        }
        while(x != 0 || y != 0){
            if(x > 0 && y > 0){
                if(x == y){
                    pay += x * b;
                    x = 0;
                    y = 0;
                }
                else{
                    int temp = min(x, y);
                    pay += temp * b;
                    x -= temp;
                    y -= temp;
                }
                
            }
            else if(x < 0 && y < 0){
                if(x == y){
                    pay += (-x) * b;
                    x = 0;
                    y = 0;
                }
                else{
                int temp = max(x, y);
                    pay += - (temp * b);
                    x += temp;
                    y += temp;
                }
            }
            else if(x > 0){
                pay += (x * a);
                x = 0;
            }
            else if(x < 0){
                pay += -(x * a);
                x = 0;
            }
            else if(y > 0){
                pay += (y * a);
                y = 0;
            }
            else if(y < 0){
                pay += -(y * a);
                y = 0;
            }
        }
        cout << pay << "\n";
    }
}