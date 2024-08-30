#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "printing inside function" << endl;
    arr[0] = 8;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    cout << "printing in main function" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
}
