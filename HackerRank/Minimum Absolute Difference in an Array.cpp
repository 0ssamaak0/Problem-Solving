#include <bits/stdc++.h>
using namespace std;

void quicksort(int arr[], int left, int right)
{
    if (right <= left)
    {
        return;
    }

    int pivot = arr[left];
    int i = left + 1;
    for (int j = left + 1; j <= right; j++)
    {
        if (arr[j] < pivot)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
    }

    int temp = arr[left];
    arr[left] = arr[i - 1];
    arr[i - 1] = temp;

    quicksort(arr, left, i - 2);
    quicksort(arr, i, right);
}

int arr[100000];
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);

    int least_diff = abs(arr[1] - arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (least_diff > abs(arr[i] - arr[i - 1]))
        {
            least_diff = abs(arr[i] - arr[i - 1]);
        }
    }
    cout << least_diff << "\n";
}