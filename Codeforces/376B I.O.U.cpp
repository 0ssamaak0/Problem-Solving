#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;
    int m; cin >> m;
    int pay[100] = {0};
    int take[100] = {0};
    int total[100] = {10};

    int a;
    int b;
    int c;

    for (int i = 0; i < m; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        take[b - 1] += c;
        pay[a - 1] += c;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        total[i] = take[i] - pay[i];
        if (total[i] > 0){
            sum += total[i];
        }
    }
    cout << sum << "\n";
    
    
    


}