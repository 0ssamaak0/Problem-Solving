class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> numcopy = nums;

        vector<int> result;

        sort(numcopy.begin(), numcopy.end());

        for (int i = 0; i < numcopy.size(); i++)
        {
            cout << nums[i] << "\n";
        }

        for (int i = numcopy.size() - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (numcopy[i] + numcopy[j] > target)
                {
                    break;
                }
                else if (numcopy[i] + numcopy[j] < target)
                {
                    continue;
                }
                else
                {
                    for (int k = 0; k < nums.size(); k++)
                    {
                        if (nums[k] == numcopy[i])
                        {
                            result.push_back(k);
                            break;
                        }
                    }
                    for (int k = 0; k < nums.size(); k++)
                    {
                        if (nums[k] == numcopy[j] && k != result[0])
                        {
                            result.push_back(k);
                            break;
                        }
                    }
                    return result;
                }
            }
        }
        return result;
    }
};