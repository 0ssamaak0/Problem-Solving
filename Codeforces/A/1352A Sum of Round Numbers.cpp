#include <bits/stdc++.h>
using namespace std;

int main(void){

    int t; cin >> t;
    int num;
    int sum;
    int val;
    int arr[5];
    for (int i = 0; i < t; i++)
    {
        cin >> num;
        sum = 0;
        int weight = 100000;
        while(weight > 1){
            weight /= 10;
            val = ((num / weight) * weight) % (10 * weight);
            if (val != 0){
                arr[sum] = val;
                sum++;
            }
        }
        cout << sum << "\n";
        for (int i = 0; i < sum; i++)
        {
            cout << arr[i] << " ";
        }
        
    }
    cout << "\n";
}