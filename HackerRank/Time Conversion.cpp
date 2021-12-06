#include <bits/stdc++.h>
using namespace std;


int main(void){
    string twelve;
    string twfour;
    cin >> twelve;

    string time = twelve.substr(8);
    int hour = stoi(twelve.substr(0,2));
    int hplus = hour + 12;


    twfour = twelve.substr(0,8);
    if (time == "PM" && hour != 12){
        twfour = to_string(hplus) + twelve.substr(2,6);
    }
    if (time == "AM" && hour == 12){
        twfour = "00" + twelve.substr(2,6);
    }

    cout << twfour;
    
}