class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {

        int m = p.size();
        int n = s.size();

        vector<int> ans;

        if (m > n)
            return ans;
        vector<int> smap(26);
        vector<int> pmap(26);

        for (int i = 0; i < m; i++)
        {
            smap[s[i] - 'a']++;
            pmap[p[i] - 'a']++;
        }

        if (smap == pmap)
            ans.push_back(0);

        for (int i = m; i < n; i++)
        {

            smap[s[i] - 'a']++;
            smap[s[i - m] - 'a']--;

            if (smap == pmap)
            {
                ans.push_back(i - m + 1);
            }
        }

        return ans;
    }
};