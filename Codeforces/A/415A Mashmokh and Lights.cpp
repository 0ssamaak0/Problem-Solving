#include<bits/stdc++.h>
using namespace std;


int main(void){
    
    int n; cin >> n;
    int m; cin >> m;
    int lights[100];
    int ON[100] = {0};

    for (int i = 0; i < m; i++)
    {
        cin >> lights[i];
        for (int j = lights[i] - 1; j < n; j++)
        {
            if(ON[j] == 0){
                ON[j] = lights[i];
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << ON[i] << " ";
    }
    cout << "\n";
    


    
    


}