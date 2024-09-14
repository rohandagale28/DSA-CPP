#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}
void update(int *p)
{
    cout << p << endl;
    *p = *p + 1;
    cout << p << endl;
}

int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    print(p);
    update(p);
    print(p);

    int arr[6] = {1, 2, 3, 4, 5,8};
    cout << sum(arr+3, 3) << endl;
}