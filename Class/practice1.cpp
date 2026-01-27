
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;

    int *ptr1 = new int;

    *ptr1 = 10;
    int **ptr2 = &ptr1;

    int ***ptr3 = &ptr2;
    cout << "Value pointed by ptr1: " << *ptr1 << endl;
    cout << "Address stored in ptr1: " << ptr1 << endl;
    cout << "Address of ptr1 itself: " << &ptr1 << endl;
    cout << "Value pointed by ptr2 (address of ptr1): " << *ptr2 << endl;
    cout << "Value pointed by ptr3 (address of ptr2): " << *ptr3 << endl;

    delete ptr1;

    return 0;
}