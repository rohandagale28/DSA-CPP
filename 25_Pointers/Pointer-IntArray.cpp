#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 122, 41, 67};
    cout << "address of first memory block is: " << arr << endl;
    cout << "address of first memory block is: " << &arr[0] << endl;
    cout << "4th item: " << *arr << endl;
    cout << "5th item: " << *arr + 1 << endl;
    cout << "6th item: " << (*arr) + 1 << endl;

    int i = 3;
    cout << i[arr] << endl;
    cout << "7th item: " << arr + 1 << endl;
    cout << "array address at any given place: " << *(arr + i) << endl;

    cout << "size of items in array is: " << sizeof(arr) << endl;
    cout << "size of items in array is: " << sizeof(*arr) << endl;
    cout << "size of items in array is: " << sizeof(&arr) << endl;

    int arr2[10];
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr +1;
    cout<<ptr<<endl;

    return 0;
}