#include<bits/stdc++.h>
using namespace std;


int main(void){
    int a, b;
    bool rated = false;
    bool unrated = false;
    bool maybe = false;
    int old = 4200;
    int n; cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (a != b){
            rated = true;
        }
        else{
            if (a <= old){
                maybe = true;
                old = a;
            }
            else{
                unrated = true;
            }
        }
    }
    if (rated == true){
        cout << "rated" << "\n";
    }
    else if (unrated == true){
        cout << "unrated" << "\n";
    }
    else {
        cout << "maybe" << "\n";
    }
    
}
