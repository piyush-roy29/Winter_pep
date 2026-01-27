// class Solution
// {
// public:
//     void insertionSort(vector<int> &arr)
//     {
//         // code here
//         int n = arr.size() - 1;
//         for (int i = 1; i <= n; i++)
//         {
//             int key = arr[i];
//             int j = i - 1;
//             while (j > -1 && arr[j] > key)
//             {
//                 arr[j + 1] = arr[j];
//                 j--;
//             }
//             arr[j + 1] = key;
//         }
//     }
// };