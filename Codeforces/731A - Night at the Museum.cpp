#include <string>
#include <iostream>

using namespace std;

int main(void){
    string word;
    cin >> word;
    int sum = 0;
    int x =  (int) (abs('a' - word[0]));
    sum += x <= 13 ? x : 26 - x;
    for(int i = 0; i < strlen(word.c_str()) - 1; i ++){
        int x =  (int) (abs(word[i] - word[i + 1]));
        sum += x <= 13 ? x : 26 - x;
    }
    cout << sum;
}