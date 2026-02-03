class Solution
{
public:
    int findFirst(vector<int> &nums, int target)
    {
        int ans = -1;
        int e = nums.size() - 1;
        int s = 0;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }
            else if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

    int findLast(vector<int> &nums, int target)
    {
        int ans = -1;
        int e = nums.size() - 1;
        int s = 0;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }
            else if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        return ans;
    }

    int countFreq(vector<int> &arr, int target)
    {
        // code here
        int first = findFirst(arr, target);
        if (first == -1)
            return 0;
        int last = findLast(arr, target);

        return (last - first) + 1;
    }
};