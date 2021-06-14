#include<bits/stdc++.h>
using namespace std;


int main(void){
    int t; cin >> t;
    int r, l;
    for (int i = 0; i < t; i++)
    {
        cin >> l >> r;
        int num = 0;
        for (int i = l; i < r + 1; i++)
        {   
            if(i <= 10){
                if(i == 2 || i == 3 || i == 9){
                    num ++;
                }
            }
            else{
                if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9){
                    num ++;
                }
            }
        }
        

        cout << num << "\n";



    }
    


}