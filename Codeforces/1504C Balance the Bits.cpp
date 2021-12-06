#include <bits/stdc++.h>
using namespace std;


int zerocounter(string s){
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0'){
            count ++;
        }
    }
    return count;  
}
void printer(int n){
    for (int i = 0; i < (n + 1)/ 2; i++)
    {
        cout << "(";
    }
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        cout << ")";
    }  
}
void printer2(int n){
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0){
            cout << "(";
            continue;
        }
        cout << ")";
    }
}

int main(void){
    int t; cin >> t;
    int n;
    string s;
    int zeros;
    int counter;
    int max = 0;

    while(t--){
        cin >> n;
        cin >> s;
        int odds = 0;

        array <char, 200000> arr;
        zeros = 0;
        if (s.size() % 2 != 0 || s[0] == '0' || s[s.size() - 1] == '0' || zerocounter(s) % 2 != 0){
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        arr[0] = '(';
        arr[n - 1] = ')';
        for (int i = 1; i < s.size() - 1; i+=2)
        {
            if (s[i] == s[i + 1]){
                arr[i] = '(';
                arr[i + 1] = ')';
            }
            else{
                if (odds % 2 == 0){
                    arr[i] = '(';
                    arr[i + 1] = '(';
                    odds ++;
                    continue;
                }
                arr[i] = ')';
                arr[i + 1] = ')';
                odds++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1'){
                cout << arr[i];
                continue;
            }
            if (arr[i] == '('){
                cout << ')';
                continue;
            }
            cout << "(";
        }
        
        

        cout << "\n";
    }
}