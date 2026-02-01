#include <iostream>
using namespace std;

bool binary_search(int *arr, int left, int right, int target)
{
    if (left > right)
    {
        return false;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
    {
        return true;
    }
    else if (arr[mid] < target)
    {
        return binary_search(arr, mid + 1, right, target);
    }
    else
    {
        return binary_search(arr, left, mid - 1, target);
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    bool ans = binary_search(arr, 0, n - 1, target);
    if (ans)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    delete[] arr;
    return 0;
}