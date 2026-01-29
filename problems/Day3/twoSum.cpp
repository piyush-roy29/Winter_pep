class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> track; // key is element value is index
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int rest = target - nums[i];
            int value = nums[i];
            if (track.find(rest) != track.end())
            {
                return {track[rest], i};
            }
            track[value] = i;
        }
        return {-1, -1};
    }
};