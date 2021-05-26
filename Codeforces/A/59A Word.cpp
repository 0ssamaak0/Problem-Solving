#include <bits/stdc++.h>
using namespace std;

int main(void){
    int lower = 0;
    int upper = 0;

    string word; cin >> word;

    for (int i = 0; i < word.size(); i++)
    {
        if((int) word[i] >= 97){
            lower ++;
        }
        else{
            upper ++;
        }
    }
    if (upper > lower){
        for (int i = 0; i < word.size(); i++)
        {
            cout << (char) toupper(word[i]);
        }
        return 0;
    }
    else{
        for (int i = 0; i < word.size(); i++)
        {
            cout << (char) tolower(word[i]);
        }
    }
    
    

}