#include <iostream> //preprocessor directive
using namespace std;

#define PI 3.14 // object like macro

#define AREA(l, b) (l * b) // functional macro

#define ARR 1, \
            2, \
            3

#define FOLLOW BAKER // chain macro
#define BAKER 5

int main()
{
    int r = 5;

    double area = PI * r * r;
    cout << area << endl;

    int area1 = AREA(5, 10);
    cout << area1 << endl;

    int arr[3] = {ARR};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i];
    }
    cout << endl;

    int chain = FOLLOW;
    cout << chain << endl;
    return 0;
}