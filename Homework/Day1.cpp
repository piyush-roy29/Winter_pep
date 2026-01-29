#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[9];
    cout << "Enter 9 integers:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    int **arr2 = new int *[3];
    for (int i = 0; i < 3; i++)
        arr2[i] = new int[3];

    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr[k++];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
    for (int i = 0; i < 3; i++)
        delete[] arr2[i];
    delete[] arr2;

    return 0;
}
