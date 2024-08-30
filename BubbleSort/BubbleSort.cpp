#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++) // for round 1 to n-1
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    BubbleSort(arr, arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}