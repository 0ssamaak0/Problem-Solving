#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int n; cin >> n;
    string s; cin >> s;
    int freq[101] = {0};
    char alphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
 
    for (int i = 0; i < n; i++)
    {
        freq[(int) toupper(s[i]) - 65] ++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] < 1){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
 
    return 0;
    
 
 
}