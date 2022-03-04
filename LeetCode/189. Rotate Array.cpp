#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k %= nums.size();
        vector<int> new_nums;
        for (int i = 0; i < nums.size(); i++)
        {
            new_nums.push_back(nums[i]);
        }
        for (int i = 0; i < k; i++)
        {
            nums[i] = new_nums[nums.size() - k + i];
        }
        for (int i = k; i < nums.size(); i++)
        {
            nums[i] = new_nums[i - k];
        }
    }
};