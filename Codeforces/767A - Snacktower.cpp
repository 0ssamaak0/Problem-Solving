#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;

    int arr[100000];
    int freq[100001] = {0};

    int maximum = n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]] ++;
        while (maximum != 0)
        {
            if(freq[maximum] != 0){
                cout << maximum  << " ";
                maximum --;
            }
            else{
                cout << "\n";
                break;
            }
        }
   
    }
}