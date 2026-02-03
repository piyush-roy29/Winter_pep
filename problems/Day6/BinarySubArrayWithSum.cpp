class Solution
{

    int getUpto(vector<int> &arr, int goal)
    {
        int sum = 0;
        int ans = 0;
        for (int l = 0, r = 0; r < arr.size(); r++)
        {
            sum += arr[r];

            while (sum > goal && l < r)
            {
                sum -= arr[l];
                l++;
            }
            if (sum <= goal)
            {
                ans += (r - l + 1);
            }
        }
        return ans;
    }

public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int n = nums.size();
        // upto gaol - upto goal all output
        int upto_goal = getUpto(nums, goal);
        int upto_goal_1 = getUpto(nums, goal - 1);

        return upto_goal - upto_goal_1;
    }
};