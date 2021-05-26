#include <string>
#include <iostream>
using namespace std;

int main(void){
    int n; cin >> n;
    string words[100];
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }
    for(int i = 0; i < n; i++){
        if (strlen(words[i].c_str()) > 10){
            cout << words[i][0] << strlen(words[i].c_str()) - 2 << words[i][strlen(words[i].c_str()) - 1] << endl;
            continue;
        }
        cout << words[i] << endl;
    }

}