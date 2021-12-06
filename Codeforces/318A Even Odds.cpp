#include <iostream>
#include <string>
using namespace std;
 
int main(void){
    long long n; cin >> n;
    long long count; cin >> count;
    long long out;
    long long i;
 
    if (n % 2 == 0){
        if (count <= n / 2){
            out = 1;
            out = 1 + 2 * (count - 1);
        }
        else{
            out = 0;
            out = 2 * (count - (n / 2));
        }
    }
    else{
        if (count < (n / 2) + 1){
            out = 2 * (count) - 1;
        }
        else if (count == ((n / 2) + 1)){
            out = n;
        }
        else{
            out = 2 * (count - ((n / 2 ) + 1));
        }
    }
    cout << out << endl;

 
}