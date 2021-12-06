#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main(void)
{

    int n;
    cin >> n;
    int m;
    cin >> m;

    int arr[20][2];
    int temp[2];
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
        {
            if (arr[j][1] < arr[j + 1][1])
            {
                temp[0] = arr[j + 1][0];
                temp[1] = arr[j + 1][1];
                arr[j + 1][0] = arr[j][0];
                arr[j + 1][1] = arr[j][1];
                arr[j][0] = temp[0];
                arr[j][1] = temp[1];
            }
        }
    }
    // cout << "------\n";
    // for (int i = 0; i < m; i++)
    // {
    //     cout << arr[i][0] << " ";
    //     cout << arr[i][1] << "\n";
    // }

    int i = 0;
    while (n != 0)
    {
        for (int j = 0; j < arr[i][0]; j++)
        {
            // cout << "n: " << n << " sum += " << arr[i][1] << "\n";
            sum += arr[i][1];
            n--;
            if (n == 0)
            {
                break;
            }
        }
        i++;
        if (i + 1 > m)
        {
            break;
        }
    }
    cout << sum;
}