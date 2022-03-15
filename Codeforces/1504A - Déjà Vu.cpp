#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;
    string word;
    bool found;
    int size;

    for (int i = 0; i < n; i++)
    {
        found = false;
        cin >> word;
        size = word.size();
            for (int j = 0; j < size; j++)
            {
                if (word[j] != 'a'){
                    cout << "YES\n" << word.substr(0, size - j) + "a" + word.substr(size - j) << "\n";
                    found = true;
                    break;
                }      
            }
            if (found == false){
                cout << "NO\n";
        
            }
    }
}