#include <bits/stdc++.h>
using namespace std;

int n;
int sum = 0;
int snowdrifts[100][2] = {0, 0};
int visited[100] = {0};

void DFS(int start)
{
    if (start >= n)
    {
        return;
    }
    visited[start] = 1;
    for (int i = 0; i < n; i++)
    {
        if ((snowdrifts[start][0] == snowdrifts[i][0] || snowdrifts[start][1] == snowdrifts[i][1]) && visited[i] == 0 && i != start)
        {
            sum--;
            visited[i] = 1;
            DFS(i);
        }
    }
}

int main(void)
{

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> snowdrifts[i][0] >> snowdrifts[i][1];
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            DFS(i);
        }
    }

    cout << sum + n - 1 << "\n";
}