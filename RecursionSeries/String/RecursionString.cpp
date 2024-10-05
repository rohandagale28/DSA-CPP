#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str, int start, int len)
{
    if (start >= len)
    {
        return;
    }
    swap(str[start], str[len]);
    reverseString(str, start + 1, len - 1);
}

void print(string &str)
{
    cout << str << endl;
}

int main()
{

    string str = "hello";
    cout << &str << "main"<<endl;
    reverseString(str, 0, str.length() - 1);
    print(str);
    return 0;
}