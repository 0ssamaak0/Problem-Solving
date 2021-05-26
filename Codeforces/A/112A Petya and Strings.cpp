#include <string>
#include <iostream>

using namespace std;

int main(void){
    string a; cin >> a;
    string b; cin >> b;

    for (int i = 0; i < strlen(a.c_str()); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    cout << a.compare(b) << endl;
}