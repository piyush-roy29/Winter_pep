class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];

        int s = 0, e = n - 1;
        // if equal then 0 index = even and next is odd and this same continues until it hit single occurance
        // then after that first will be odd and second will be even
        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            // edge cases
            if (mid == 0 && nums[mid] != nums[mid + 1])
                return nums[mid];
            if (mid == n - 1 && nums[mid] != nums[mid - 1])
                return nums[mid];
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];

            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
                (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        return -1;
    }
};
