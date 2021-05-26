#include <iostream>
using namespace std;

int main(void){
    int num, f1, f2, f3, sum = 0;
    cin >> num;
    for (int i = 0; i< num; i++){
        cin >> f1 >> f2 >> f3;
        if (f1 + f2 + f3 >= 2){
            sum ++;
        }
    }
    cout << sum << "\n";
}