#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    // address of operator
    // cout << addressof(num) << endl;
    // cout << "Address of num: " << &num << endl;

    int *ptr = &num;
    cout << *ptr << endl;
    cout << ptr << endl;

    cout << "size of interger is: " << sizeof(num) << endl;
    cout << "size of pointer is: " << sizeof(ptr) << endl;

    (*ptr)++;
    cout << *ptr << endl;

    ptr = ptr + 1;
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}