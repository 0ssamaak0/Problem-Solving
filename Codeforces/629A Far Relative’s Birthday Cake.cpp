#include<bits/stdc++.h>
using namespace std;


int main(void){
    
    int n; cin >> n;
    char cake[100][100];
    int happy = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cake[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(cake[i][j] == 'C'){
                for (int k = j + 1; k < n; k++)
                {
                    if(cake[i][k] == 'C'){
                        happy ++;
                    }
                }
                
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(cake[j][i] == 'C'){
                for (int k = j + 1; k < n; k++)
                {
                    if(cake[k][i] == 'C'){
                        happy ++;
                    }
                }
                
            }
        }
    }

    cout << happy << "\n";
    


}