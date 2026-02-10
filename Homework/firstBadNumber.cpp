// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int i = 0;
        int ans = n;
        while (i <= n)
        {
            int mid = i + (n - i) / 2;
            if (isBadVersion(mid))
            {
                ans = mid;
                n = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return ans;
    }
}; // The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int i = 0;
        int ans = n;
        while (i <= n)
        {
            int mid = i + (n - i) / 2;
            if (isBadVersion(mid))
            {
                ans = mid;
                n = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return ans;
    }
};