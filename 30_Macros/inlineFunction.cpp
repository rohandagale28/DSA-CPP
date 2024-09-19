#include <iostream> //preprocessor directive
using namespace std;

void add(int a, int b)
{
    a++;
    b++;
    cout << a << b << endl;
}

inline int getMax(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;
    add(a, b);
    
    //inline function should be less than 2 lines
    ans = getMax(a,b); //inline replacemtn wiht the actual value in function getMax same as macro
    cout << ans << endl; //no extra memory, no function call overhead, 

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;
}