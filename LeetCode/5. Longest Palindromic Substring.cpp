class Solution
{
public:
    string longestPalindrome(string s)
    {
        string result = "";
        int length = 0;

        int left, right;

        for (int i = 0; i < s.size(); i++)
        {
            // Odd case
            left = i;
            right = i;

            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                if (right - left + 1 > length)
                {
                    result = s.substr(left, right - left + 1);
                    length = right - left + 1;
                }
                left--;
                right++;
            }

            // Even case
            left = i;
            right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                if (right - left + 1 > length)
                {
                    result = s.substr(left, right - left + 1);
                    length = right - left + 1;
                }
                left--;
                right++;
            }
        }
        return result;
    }
};