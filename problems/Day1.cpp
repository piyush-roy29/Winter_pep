// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         // code here
//         int i=0,j = arr.size()-1;
//         while(i<j){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// };

// class Solution
// {
// public:
//     bool isSorted(vector<int> &arr)
//     {
//         // code here
//         if (arr.size() == 0 || arr.size() == 1)
//             return true;
//         for (int i = 1; i < arr.size(); i++)
//         {
//             if (arr[i] < arr[i - 1])
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// };

// class Solution
// {
// public:
//     int largest(vector<int> &arr)
//     {
//         // code here
//         int maxi = INT_MIN;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             maxi = max(maxi, arr[i]);
//         }
//         return maxi;

//         // sort(arr.begin(),arr.end());
//         // return arr[arr.size()-1];
//     }
// };

// class Solution
// {
// public:
//     int getSecondLargest(vector<int> &arr)
//     {
//         // code here
//         int largest = -1;
//         int secondLargest = -1;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             if (largest < arr[i])
//             {
//                 secondLargest = largest;
//                 largest = arr[i];
//             }
//             else if (arr[i] < largest && arr[i] > secondLargest)
//             {
//                 secondLargest = arr[i];
//             }
//         }
//         return secondLargest;
//     }
// };

// class Solution {
//   public:
//     int maxConsecBits(vector<int> &arr) {
//         if(arr.size() == 0) return 0;
//         // code here
//         int maxi = 1;
//         int count = 1;
//         for(int i=1;i<arr.size();i++){
//             if(arr[i] == arr[i-1]){
//                 count++;
//             }else{
//                 count = 1;
//             }
//             maxi = max(maxi,count);
//         }
//         return maxi;
//     }
// };
