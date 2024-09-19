#include <iostream> // preprocessor directive
#include <vector>   // Include the vector header

using namespace std;

void SelectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 6, 3, 9, 8};
    SelectionSort(arr, arr.size());
    printArray(arr, arr.size());
    return 0;
}
