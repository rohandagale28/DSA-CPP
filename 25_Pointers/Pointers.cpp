#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    num++;
    int *ptr = &num;
    int a = *ptr; //5
    a++;
    (*ptr)++;
    cout<<a<<endl;
    cout << "the value of num is: " << num << endl;
    cout << "the address of num is: " << &num << endl;
    cout << "the value of ptr is: " << *ptr << endl;
    cout << "the address of num stored in ptr: " << ptr << endl;
    cout << "the address of ptr is: " << &ptr << endl;
    cout << "the size of pointer is: " << sizeof(ptr) << endl;
    return 0;
}