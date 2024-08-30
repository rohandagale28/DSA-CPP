#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SwapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {5, 2, 9, 4, 12};
    SwapAlternate(even, 8);
    printArray(even, 8);
    SwapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}