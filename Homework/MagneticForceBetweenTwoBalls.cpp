class Solution
{
    bool calculate(vector<int> &pos, int dist, int balls)
    {
        int last = pos[0];
        int count = 1;

        for (int i = 1; i < pos.size(); i++)
        {
            if ((pos[i] - last) >= dist)
            {
                count++;
                last = pos[i];
            }
        }
        return (count >= balls);
    }

public:
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int n = position.size();
        int low = 1;
        int high = position[n - 1] - position[0];
        int ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            bool possible = calculate(position, mid, m);

            if (possible)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
    }
};