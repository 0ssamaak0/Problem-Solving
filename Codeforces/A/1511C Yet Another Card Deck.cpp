#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    int q; cin >> q;
    int before = 0;
    int stack = 0;
    bool done;
    
    size_t array_size = 300000;
    int *colors = new int[array_size];
    int *query = new int[array_size];

    colors[300000];
    query[300000];

    for (int i = 0; i < n; i++)
    {
        cin >> colors[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> query[i];
    }

    for (int i = 0; i < q; i++)
    {
        // cout << "\n";
        // for (int j = 0; j < n; j++)
        // {
        //     cout << colors[j] << " ";
        // }
        // cout << "\n";
        for (int j = 0; j < n; j++)
        {
            if (query[i] == colors[j]){
                cout << j + 1<< " ";
                int temp1 = colors[j];
                for (int k = j; k > 0; k--)
                {
                    colors[k] = colors[k - 1];

                }
                colors[0] = temp1;
                
                break;
            }
        } 
    }
    

    delete(colors);
    delete(query);
    
}