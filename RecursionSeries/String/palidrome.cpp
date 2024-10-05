#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string &str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "abbccbba";
    cout << endl;
    bool isPalidrome = checkPalindrome(name, 0, name.length() - 1);
    if (isPalidrome)
    {
        cout << "its a palidrome string" << endl;
    }
    else
    {
        cout << "its a not palidrome string" << endl;
    }
    return 0;
}