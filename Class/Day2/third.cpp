class Solution
{
public:
    void bubbleSort(vector<int> &arr)
    {
        // Your code here
        int n = arr.size();
        for (int i = 0; i < n - 1; i++)
        {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }
};
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    Solution sol;
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    sol.bubbleSort(arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}