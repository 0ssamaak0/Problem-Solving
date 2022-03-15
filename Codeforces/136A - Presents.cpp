#include <iostream>
using namespace std;

int main(void){
    int n; cin >> n;
    int arr[100];
    int arrdup[100];
    for (int i = 0; i < n; i++){
        cin >> arr [i];
    }
    for (int i = 1; i < n + 1; i++){
        for (int j = 0; j < n; j++){
            if (i == arr[j]){
                cout << j + 1 << " ";
            }
        }
    }

}