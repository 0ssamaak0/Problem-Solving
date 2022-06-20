#include <bits/stdc++.h>
using namespace std;

int arr[4000] = {0};
int a, b, c;

int main(void)
{
    int n;
    cin >> n >> a >> b >> c;
    int result = 0;

    for (int i = 0; i <= 4000; i++)
    {
        for (int j = 0; j <= 4000; j++)
        {
            int kc = n - (i * a + j * b);
            if (kc < 0)
            {
                break;
            }
            float k = kc / (float)c;
            if (k == (int)k)
            {
                result = max(result, i + j + (int)k);
            }
        }
    }
    cout << result << "\n";
}