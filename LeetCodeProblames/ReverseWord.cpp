#include <iostream>
#include <string>
using namespace std;

string reverseWord(string s)
{
    string temp = "";
    string word = "";

    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << i << endl;
        if (s[i] == ' ')
        {
            if (!word.empty())
            {
                temp += word + ' ';
                word = "";
            }
        }
        else
        {
            word = s[i] + word;
        }
    }
    if (!word.empty())
    {
        temp += word;
    }

    return temp;
}

int main()
{
    string s = "  hello world  ";
    cout << s.length() << endl;
    string temp = reverseWord(s);
    cout << temp << endl; // Expected Output: "blue is sky the"
    cout << "the lenght of reverse word is: " << temp.length() << endl;
    cout << "expected: " << 11 << endl;
    return 0;
}
