#include <iostream>
#include <vector>
using namespace std;

void sortArray(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return;
    }

    // 1 case - largest element ko end me rakh dega
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArray(arr, size - 1);
}

int main()
{
    int arr[5] = {2, 5, 1, 6, 9};
    sortArray(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}