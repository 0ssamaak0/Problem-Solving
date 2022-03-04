#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> new_nums;
        int inversion_index = 0;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] < 0 && nums[i + 1] >= 0)
            {
                inversion_index = i;
                break;
            }
        }

        int rightptr = inversion_index + 1;
        int leftptr = inversion_index;

        if (nums[nums.size() - 1] < 0)
        {
            rightptr = nums.size();
            leftptr = nums.size() - 1;
        }
        if (nums[0] >= 0)
        {
            leftptr = 0;
        }

        while (leftptr >= 0 || rightptr < nums.size())
        {
            if (leftptr >= 0 && rightptr < nums.size())
            {
                if (abs(nums[leftptr]) < nums[rightptr])
                {
                    new_nums.push_back(pow(nums[leftptr], 2));
                    leftptr--;
                }
                else
                {
                    new_nums.push_back(pow(nums[rightptr], 2));
                    rightptr++;
                }
            }
            else if (leftptr >= 0)
            {
                new_nums.push_back(pow(nums[leftptr], 2));
                leftptr--;
            }
            else
            {
                new_nums.push_back(pow(nums[rightptr], 2));
                rightptr++;
            }
        }

        return new_nums;
    }
};