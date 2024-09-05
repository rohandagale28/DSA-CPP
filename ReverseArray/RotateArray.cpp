#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    rotateArray(arr, 4, 2);
    print(arr, 4);

    return 0;
}