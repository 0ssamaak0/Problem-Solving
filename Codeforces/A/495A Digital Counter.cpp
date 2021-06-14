#include<bits/stdc++.h>
using namespace std;


int main(void){
    string num; cin >> num;
    int p[2];
    for (int i = 0; i < num.size(); i++)
    {
        if(num[i] == '0'){

            p[i] = 2;
        }
        if(num[i] == '1'){

            p[i] = 7;
        }
        if(num[i] == '2'){

            p[i] = 2;
        }
        if(num[i] == '3'){

            p[i] = 3;
        }
        if(num[i] == '4'){

            p[i] = 3;
        }
        if(num[i] == '5'){

            p[i] = 4;
        }
        if(num[i] == '6'){

            p[i] = 2;
        }
        if(num[i] == '7'){

            p[i] = 5;
        }
        if(num[i] == '8'){

            p[i] = 1;
        }
        if(num[i] == '9'){

            p[i] = 2;
        }

    }
    cout << p[0] * p[1] << "\n";
    


}