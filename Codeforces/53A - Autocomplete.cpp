#include<bits/stdc++.h>
using namespace std;


int main(void){
    string s; cin >> s;
    int n; cin >> n;
    string add[100];
    int lengths[100];

    for (int i = 0; i < n; i++)
    {
        cin >> add[i];
        lengths[i] = add[i].size();
    }
    int index = -1;
    string smallest = "";
    for (int i = 0; i < n; i++)
    {
        if(add[i].substr(0, s.size()).compare(s) == 0){
            if(smallest == ""){
                smallest = add[i];
            }
            else{
                if(smallest > add[i]){
                    smallest = add[i];
                }
            }
            index = 0;
        }
    }
    if(index == -1){
        cout << s << "\n";
    }
    else{
        cout << smallest << "\n";
    }
    
    


}