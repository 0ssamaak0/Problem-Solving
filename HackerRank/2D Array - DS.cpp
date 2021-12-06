#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr[6][6];
    int hourglass[4][4];

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hourglass[i][j] = 0;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hourglass[i][j] += arr[i][j];
            hourglass[i][j] += arr[i][j + 1];
            hourglass[i][j] += arr[i][j + 2];
            hourglass[i][j] += arr[i + 1][j + 1];
            hourglass[i][j] += arr[i + 2][j];
            hourglass[i][j] += arr[i + 2][j + 1];
            hourglass[i][j] += arr[i + 2][j + 2];
        }
    }
    int maxima = hourglass[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (hourglass[i][j] > maxima)
            {
                maxima = hourglass[i][j];
            }
        }
    }
    cout << maxima;
}
