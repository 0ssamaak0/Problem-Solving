#include <bits/stdc++.h>
using namespace std;



int is_here (char x, char unique[], int numunique){
    for (int i = 0; i < numunique; i++)
    {
        if (x == unique[i]){
            return 0;
            break;
        }
    }
    return 1;
    
}


int main(void){
    char unique[28];
    int numunique = 0;
    string n; cin >>n;
    int i = 0;


    for (int i = 0; i < n.size(); i++)
    {
        if (is_here(n[i], unique, numunique) != 0){
            unique[numunique] = n[i];
            numunique ++;
            // cout << n[i] << "-----\n";
        }
    }

    if (numunique % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    


}