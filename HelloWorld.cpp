#include <iostream>
using namespace std;

void check(int *num)
{
    cout << "Check function" << num << endl;
    cout << "Check function" << &num << endl;
    *num = 6; // dererranceing operator
    // cout << *num << endl;
    // *num = 6;
}

int main()
{
    int num = 5;
    int *ptr = &num;
    cout << "address of ptr" << &ptr << endl;
    cout << "Main" << &num << endl;
    check(ptr);
    cout << num << endl;
    return 0;
}