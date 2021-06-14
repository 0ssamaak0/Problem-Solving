#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;
    int taxis[100] = {0};
    int pizzas[100] = {0};
    int girls[100] = {0};
    string names[100];

    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        string number;
        cin >> names[i];
        for (int j = 0; j < t; j++)
        {
            cin >> number;
            if(number[0] == number[1] && number[1] == number[3] && number[3] == number[4] && number[4] == number[6] && number[6]  == number[7]){
                taxis[i] ++;
            }
            else if(number[0] > number[1] && number[1] > number[3] && number[3] > number[4] && number[4] > number[6] && number[6]  > number[7]){
                pizzas[i] ++;
            }
            else{
                girls[i] ++;
            }
        }
    }
    int maxtaxi = 0;
    int maxpizza = 0;
    int maxgirls = 0;
    for (int i = 0; i < n; i++)
    {
        maxtaxi = max(maxtaxi, taxis[i]);
        maxpizza = max(maxpizza, pizzas[i]);
        maxgirls = max(maxgirls, girls[i]);
    }

    cout << "If you want to call a taxi, you should call:";
    bool used = false;
    for (int i = 0; i < n; i++)
    {
        if(taxis[i] == maxtaxi){
            if(used){
                cout << ",";
            }
            cout << " " << names[i];
            used = true;
        }
    }
    cout << ".\n";

    cout << "If you want to order a pizza, you should call:";
    used = false;
    for (int i = 0; i < n; i++)
    {
        if(pizzas[i] == maxpizza){
            if(used){
                cout << ",";
            }
            cout << " " << names[i];
            used = true;
        }
    }
    cout << ".\n";

    cout << "If you want to go to a cafe with a wonderful girl, you should call:";
    used = false;
    for (int i = 0; i < n; i++)
    {
        if(girls[i] == maxgirls){
            if(used){
                cout << ",";
            }
            cout << " " << names[i];
            used = true;
        }
    }
    cout << ".\n";
    
    
    



}