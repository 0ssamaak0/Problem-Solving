#include<bits/stdc++.h>
using namespace std;


int main(void){

    string p1; getline(cin, p1);
    string p2; getline(cin, p2);
    string p3; getline(cin, p3);
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for (int i = 0; i < p1.size(); i++)
    {
        if(p1[i] == 'a'|| p1[i] == 'e'|| p1[i] == 'i'|| p1[i] == 'o'|| p1[i] == 'u'){
            c1 ++;
        }
    }
    for (int i = 0; i < p2.size(); i++)
    {
        if(p2[i] == 'a'|| p2[i] == 'e'|| p2[i] == 'i'|| p2[i] == 'o'|| p2[i] == 'u'){
            c2 ++;
        }
    }
    for (int i = 0; i < p3.size(); i++)
    {
        if(p3[i] == 'a'|| p3[i] == 'e'|| p3[i] == 'i'|| p3[i] == 'o'|| p3[i] == 'u'){
            c3 ++;
        }
    }
    if(c1 == 5 && c2 == 7 && c3 == 5){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }



}