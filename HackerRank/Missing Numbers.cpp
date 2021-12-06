#include <bits/stdc++.h>
using namespace std;
vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr.erase(brr.begin() + j);
                break;
            }
        }
    }
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (brr[i] == brr[j] && i != j)
            {
                brr.erase(brr.begin() + j);
            }
        }
    }

    sort(brr.begin(), brr.end());
    return brr;
}
int main(void)
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int m;
    cin >> m;
    vector<int> brr;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        brr.push_back(x);
    }

    vector<int> result = missingNumbers(arr, brr);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << "\n";
}