#include <bits/stdc++.h>
using namespace std;



int main(void){
    string song; cin >> song;
    int i = 0;
    bool new_word = false;

    while (i < song.size())
    {
        if (song.substr(i, 3) == "WUB"){
            i+= 3;
            if (new_word == true){
                cout << " ";
            }
            new_word = false;
        }
        else{
            new_word = true;
            cout << song.substr(i,1);
            i++;
        }
    }
    
    


}