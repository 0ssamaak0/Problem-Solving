#include<bits/stdc++.h>
using namespace std;


int main(void){
    string first; cin >> first;
    string second; cin >> second;

    int hh1 = stoi(first.substr(0,2));
    if(hh1 == 0){
        hh1 = 24;
    }
    int mm1 = stoi(first.substr(3,5));
    int hh2 = stoi(second.substr(0,2));
    if(hh2 == 0){
        hh2 = 24;
    }
    int mm2 = stoi(second.substr(3,5));

    int t1 = (hh1* 60) + (mm1);
    int t2 = (hh2* 60) + (mm2);

    int t = t1 - t2;
    int h = t / 60;
    int m = t % 60;

    if(h <= 0){
        h = 24 + h;
    }
    if(m < 0){
        m = 60 + m;
        h--;
    }
    if(h == 24){
        h = 0;
    }
    
    if (h < 10){
        cout << "0" << h;
    }
    else{
        cout << h;
    }
    cout <<":";
    if (m < 10){
        cout << "0" << m;
    }
    else{
        cout << m;
    }
    cout << "\n";


}