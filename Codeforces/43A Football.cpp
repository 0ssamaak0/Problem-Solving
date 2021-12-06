#include <iostream>
#include <string>
using namespace std;


int main (void){
    int n; cin >> n;
    string matches[100];

    string t1;
    string t2;

    int ct1;
    int ct2;
    for (int i = 0; i < n; i++){
        cin >> matches[i];
    }
    for (int i = 0; i < n; i++){
        t1 = matches[0];
        if (strcmp(t1.c_str(), matches[i].c_str()) != 0){
            t2 = matches[i];
        }
    }

    for (int i = 0; i < n; i++){
        if (strcmp(t1.c_str(), matches[i].c_str()) == 0){
            ct1 ++;
        }
        else{
            ct2 ++;
        }
    }
    if (ct1 > ct2){
        cout << t1;
    }
    else{
        cout << t2;
    }

}