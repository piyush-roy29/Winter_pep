class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());

        string temp = "";
        int size = min(strs[0].size(), strs[strs.size() - 1].size());

        for (int i = 0; i < size; i++)
        {
            if (strs[0][i] == strs[strs.size() - 1][i])
            {
                temp += strs[0][i];
            }
            else
            {
                break;
            }
        }
        return temp;
    }
};