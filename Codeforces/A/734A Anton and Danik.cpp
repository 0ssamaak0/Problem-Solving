#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main (void){
    int rounds, A = 0, D = 0;
    cin >> rounds;
    char round;
    for (int i = 0; i < rounds; i++){
        cin >> round;
        if (round == 'A'){
            A ++;
            continue;
        }
        D++;
    }
    if (A > D){
        cout << "Anton";
    }
    else if (A < D){
        cout <<  "Danik";
    }
    else {
        cout << "Friendship";
    }
}