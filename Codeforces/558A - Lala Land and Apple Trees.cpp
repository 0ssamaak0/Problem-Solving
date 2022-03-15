#include<bits/stdc++.h>
using namespace std;


int main(void){
    int n; cin >> n;
    int dir[100];
    int apples[100];
    int dirtemp[100];
    int applestemp[100];
    int post = 0;
    int neg = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> dirtemp[i];
        cin >> applestemp[i];
        dir[i] = dirtemp[i];
        
        if (dirtemp[i] > 0){
            post ++;
        }
        else{
            neg ++;
        }
    }

    sort(dir, dir + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(dir[i] == dirtemp[j]){
                apples[i] = applestemp[j];
            }
        }
    }
    int threshold = 0;
    for (int i = 0; i < n; i++)
    {
        if(dir[i] > 0 && i > 0){
            threshold = i - 1;
            break;
        }
    }
    long long sum = 0;
    if(neg == 0){
        sum = apples[0];
    }
    else if(post == 0){
        sum = apples[n - 1];
    }
    else if(abs(post - neg) <= 1){
        for (int i = 0; i < n; i++)
        {
            sum += apples[i];
        }
    }
    else if(neg < post){
        for (int i = 0; i < threshold + neg + 2; i++)
        {
            sum += apples[i];
        }  
    }
    else{
        for (int i = threshold - post; i < threshold + post + 1; i++)
        {
            sum += apples[i];
        }
    }

    cout << sum << "\n";

    


}