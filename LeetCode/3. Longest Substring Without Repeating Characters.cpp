class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int>
            longest;

        int sum = 0;
        vector<char> current;

        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < current.size(); j++)
            {
                if (s[i] == current[j])
                {
                    longest.push_back(sum);
                    sum = 0;
                    if (s[i] != s[i - 1] && i > 0)
                    {
                        i = i - current.size() + j + 1;
                    }
                    current.clear();
                    break;
                }
            }
            sum++;
            current.push_back(s[i]);
        }
        longest.push_back(sum);

        return *max_element(longest.begin(), longest.end());
    }
};