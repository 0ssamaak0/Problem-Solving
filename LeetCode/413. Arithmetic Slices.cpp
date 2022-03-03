class Solution
{
public:
    int numberOfArithmeticSlices(vector<int> &nums)
    {
        int accum = 0;
        int slices = 0;

        for (int i = 1; i < nums.size() - 1; i++)
        {
            if (nums[i] - nums[i - 1] == nums[i + 1] - nums[i])
            {
                accum++;
            }
            else
            {
                accum = 0;
            }
            if (accum == 1)
            {
                slices++;
            }
            else if (accum > 1)
            {
                slices += accum;
            }
        }
        return slices;
    }
};