#include <iostream>
using namespace std;

void update(int **p)
{
    // p = p + 1;
    // *p = *p + 1;

    **p = **p + 1;
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "printing p: " << p << endl;
    cout << "printing address of p: " << &p << endl;
    cout << "printing p2: " << p2 << endl;
    cout << "print address of p2: " << &p2 << endl;
    cout << "value of p2: " << *p2 << endl;
    cout << "value of p2: " << **p2 << endl;
    update(p2);
    cout << **p2 << endl;
    cout << i << endl;
    return 0;
}