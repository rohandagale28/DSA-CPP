#include <iostream> //preprocessor directive
using namespace std;

int score = 15; //global variable ~ bad practice

void a(int &i)
{
    cout << i << endl;
    cout << score << endl;
}

void b(int &i)
{
    cout << i << endl;
}

int main()
{
    int i = 5;
    cout << score << endl;

    a(i);
    b(i);

    return 0;
}