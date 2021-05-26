#include <iostream>
using namespace std;



int max (int maxnum, int maxindex, int arr[], int n);

int main (void){
    // Initializing Variables
    int n;
    cin >> n;
    int arr[1000];
    int localmax;
    int out = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    for (int i = 0; i < n; i++){
        int localout = max(arr[i], i, arr, n);
        if (localout > out){
            out = localout;
        }
    }
    cout << out;
}


int max (int maxnum, int maxindex, int arr[], int n){
    int localmax;
    localmax = maxnum;  
    int out = 0;

    for (int i = maxindex + 1; i < n; i++) {
        if (localmax >= arr[i])
        {
            out ++;
            localmax = arr[i];
        }
        else{
            break;
        }
    }
    localmax = maxnum;
    for (int i = maxindex; i >= 0; i--) {
        if (localmax >= arr[i])
        {
            out ++;
            localmax = arr[i];
        }
        else{
            break;
        }
    }
    return out;
}