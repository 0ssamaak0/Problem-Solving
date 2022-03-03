// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        return binary_search(1, n);
    }

    long long binary_search(long long left, long long right)
    {
        if (left == right)
        {
            if (isBadVersion(left))
            {
                return left;
            }
            return -1;
        }
        long long mid = (right + left) / 2;
        if (isBadVersion(mid))
        {
            return binary_search(left, mid);
        }
        else
        {
            return binary_search(mid + 1, right);
        }
    }
};