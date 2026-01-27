// class Solution
// {
// public:
//     vector<int> find(vector<int> &arr, int x)
//     {
//         int first = -1;
//         int last = -1;
//         int l = 0;
//         int r = arr.size();

//         while (l < r)
//         {
//             int mid = (l + r) / 2;
//             if (arr[mid] == x)
//             {
//                 first = mid;
//                 r = mid;
//             }
//             else if (arr[mid] > x)
//             {
//                 r = mid - 1;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }
//         int index = first;
//         while (arr[index] == x)
//         {
//             last = index;
//             index++;
//         }
//         return {first, last};
//     }
// };
