#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr[4];
    int n = 4;
    bool triangle = false;
    bool segment = false;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            // cout << arr[i] + arr[i + 1] << " " << arr[j] << "\n";
            if (arr[i] + arr[i + 1] > arr[j])
            {
                triangle = true;
            }
            else if (arr[i] + arr[i + 1] == arr[j])
            {
                segment = true;
            }
        }
    }

    if (triangle)
    {
        cout << "TRIANGLE\n";
    }
    else if (segment)
    {
        cout << "SEGMENT\n";
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
}