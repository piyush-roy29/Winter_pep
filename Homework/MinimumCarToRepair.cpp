class Solution
{
public:
    long long repairableCars(vector<int> &ranks, long long time)
    {
        long long total = 0;

        for (int r : ranks)
        {
            total += (long long)sqrt(time / r);
        }

        return total;
    }

    long long repairCars(vector<int> &ranks, int cars)
    {
        long long low = 0;
        long long high = 1LL * (*min_element(ranks.begin(), ranks.end())) * cars * cars;

        long long ans = high;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;

            if (repairableCars(ranks, mid) >= cars)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};
