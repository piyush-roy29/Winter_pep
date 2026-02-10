class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int l = 0;
        int n = nums.size();
        int r = n - 1;
        int ans = 0;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= nums[mid + 1])
            {
                ans = mid;
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};