#include <iostream>
using namespace std;

int main(void){
    int matrix[5][5], steps, iloc, jloc;
    for (int i = 0; i < 5; i++){
        cout << "\n";
        for (int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if (matrix[i][j] == 1){
                iloc = i;
                jloc = j;
            }
        }
    }
    steps = abs(2-iloc) + abs(2-jloc);
    cout << steps;
}