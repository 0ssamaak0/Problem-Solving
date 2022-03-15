#include <iostream>
#include <string>
using namespace std;

int main(void){
    string line1 = "qwertyuiop";
    string line2 = "asdfghjkl;";
    string line3 = "zxcvbnm,./";

    char error; cin >> error;
    string words; cin >> words;
    

    for (int i = 0; i < words.length(); i++){
        if (error == 'R'){
            for (int j = 1; j < 10; j ++){
                if (words[i] == line1[j]){
                    cout << line1[j - 1];
                }
                else if (words[i] == line2[j]){
                    cout << line2[j - 1];
                }
                else if (words[i] == line3[j]){
                    cout << line3[j - 1];
                }
            }
        }
        if (error == 'L'){
            for (int j = 0; j < 9; j ++){
                if (words[i] == line1[j]){
                    cout << line1[j + 1];
                }
                else if (words[i] == line2[j]){
                    cout << line2[j + 1];
                }
                else if (words[i] == line3[j]){
                    cout << line3[j + 1];
                }
            }
        }
    }

}