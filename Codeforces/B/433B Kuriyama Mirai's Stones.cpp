#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;

    int * costs = new int[100000 * sizeof(int)];
    long long * sums = new long long[100000 * sizeof(long long)];
    long long * sums_sorted = new long long[100000 * sizeof(long long)];

    costs[100000];
    sums [100000];
    sums_sorted [100000];

    for (int i = 0; i < n; i++)
    {
        cin >> costs[i];
    }
    long long cuml = 0;
    for (int j = 0; j < n; j++)
    {
        sums[j] = cuml + costs[j];
        cuml += costs[j];
    }

    sort(costs, costs + n);

    cuml = 0;
    for (int j = 0; j < n; j++)
    {
        sums_sorted[j] = cuml + costs[j];
        cuml += costs[j];
    }

    int m; cin >> m;
    int r, l, type;

    for (int i = 0; i < m; i++)
    {
        cin >> type >> l >>  r;
        long long sumsr = sums[r - 1];
        long long sumsl = sums[l - 2];
        if (l == 1){
            sumsl = 0;
        }

        long long sums_sortedr = sums_sorted[r - 1];
        long long sums_sortedl = sums_sorted[l - 2];
        if (l == 1){
            sums_sortedl = 0;
        }

        if (type == 1){
            cout << sumsr - sumsl << "\n";
        }
        else {
            cout << sums_sortedr - sums_sortedl << "\n";
        }
    }

    delete(costs);
    delete(sums);
    delete(sums_sorted);

    
    
    
    
}