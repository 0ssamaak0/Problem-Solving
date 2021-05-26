#include <iostream>
using namespace std;

int main(void){
    int num, height, person;
    int sum = 0;
    cin >> num >> height;;
    for (int i = 0; i < num; i++){
        cin >> person;
        if (person > height){
        sum ++;
        }
        sum ++;
    }
    cout << sum << "\n";
}