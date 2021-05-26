#include<bits/stdc++.h>
using namespace std;


class NumMatrix {
    int n, m;
public:
    long long prefix[200][200] = {0};
    NumMatrix(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();


        for (int i = 0; i < n; i++)
        {
            prefix[i][0] = matrix[i][0];
            for (int j = 1; j < m; j++)
            {
                prefix[i][j] = prefix[i][j - 1] + matrix[i][j];
            }
            
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                prefix[i][j] += prefix[i - 1][j];
            }
            
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = prefix[row2][col2];

        if(col1 != 0){
            ans -= prefix[row2][col1 - 1];
        }
        if(row1 != 0){
            ans -= prefix[row1 - 1][col2];

        }
        if(row1 != 0 && col1 != 0){
            ans += prefix[row1 - 1][col1 - 1];

        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */