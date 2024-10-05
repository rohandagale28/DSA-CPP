#include <iostream>
using namespace std;

int minIndex(int *arr, int size, int start)
{
    int minIndex = start;
    for (int i = start + 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(int *arr, int size, int start)
{
    // base case
    if (start >= size - 1)
    {
        return;
    }

    int minFound = minIndex(arr, size, start);

    if (minFound != start)
    {
        swap(arr[start], arr[minFound]);
    }
    selectionSort(arr, 8, start + 1);
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {2, 8, 4, 9, 6, 1, 12, 7};
    selectionSort(arr, 8, 0);
    print(arr, 8);

    return 0;
}