#include <bits/stdc++.h>
using namespace std;

int n;
long long num = 0;
int fours = 0;
int sevens = 0;
long long solutions[1000];
int nsoln = 0;

bool rec(int n, long long num, int power, int fours, int sevens){
    if (power == 10){
        return false;
    }
    if(num >= n && fours == sevens){
        solutions[nsoln] = num;
        nsoln ++;
        return true;
    }
    rec(n, num + 4 * pow(10, power + 1), power + 1, fours + 1, sevens);
    rec(n ,num + 7 * pow(10, power + 1), power + 1, fours, sevens + 1);
}





int main(void){
    cin >> n;
    rec(n, num, -1, 0, 0);

    sort(solutions, solutions + nsoln);
    cout << solutions[0] << "\n";
}