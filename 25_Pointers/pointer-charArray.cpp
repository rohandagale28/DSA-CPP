#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;
    cout<<"starting char at array: "<<*c<<endl;

    char temp = 'z';
    char *ptr = &temp;
    // cout << ptr << endl;
    return 0;
}