#include <iostream>
#include <minmax.h>
using namespace std;

int main(void){

    int n; cin >> n;
    int a; cin >> a;
    a--;
    int arr[100];
    int sum = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if(i < a){
            if (a + (a - i) < n){
                if (arr[i] + arr[a + (a - i)] == 2){
                    sum ++;
                }
            }
            else{
                if (arr[i] == 1){
                    sum ++;
                }
            }
        }
        else if(i > a){
            if (a - (i - a) >= 0){
                if (arr[i] + arr[a - (i - a)] == 2){
                    sum ++;
                }
            }
            else {
                if (arr[i] == 1){
                    sum ++;
                }
            }
        }
        else{
            if (arr[i] == 1){
                sum ++;
            }
        }

    }
    



    cout << sum;

}