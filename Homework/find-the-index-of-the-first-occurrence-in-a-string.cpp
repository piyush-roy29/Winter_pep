class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int n = needle.size();
        int m = haystack.size();
        // for(int i=0; i<= m-n; i++){
        //     if(haystack.substr(i,n).compare(needle) == 0){
        //         return i;
        //     }
        // }
        // return -1;
        for (int i = 0; i <= m - n; i++)
        {
            int j = 0;
            while (j < n && haystack[i + j] == needle[j])
                j++;

            if (j == n)
                return i;
        }
        return -1;
    }
};