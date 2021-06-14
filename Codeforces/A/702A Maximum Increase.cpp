#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int maxes[100000] = {1};

int main(void){
    int t; cin >> t;
    int count = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < t; i++)
    {
        if(arr[i] > arr[i - 1]){
            maxes[count] ++;
        }
        else{
            count ++;
            maxes[count] = 1;
        }
    }

    int m = 1;
    for (int i = 0; i < count + 1; i++)
    {
        if(m < maxes[i]){
            m = maxes[i];
        }
    }
    cout << m << "\n";
}