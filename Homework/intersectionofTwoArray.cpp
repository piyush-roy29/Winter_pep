// class Solution
// {
// public:
//     vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
//     {
//         unordered_set<int> st(nums1.begin(), nums1.end());
//         vector<int> ans;
//         for (auto it : nums2)
//         {
//             if (st.find(it) != st.end())
//             {
//                 ans.push_back(it);
//                 st.erase(it);
//             }
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> ans;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                if (ans.empty() || ans.back() != nums1[i])
                {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return ans;
    }
};
