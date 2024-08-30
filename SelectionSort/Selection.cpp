#include <iostream>
#include <vector> // Include the vector header

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

int main()
{
    vector<int> arr = {2, 6, 3, 9, 8}; // Use vector instead of an array
    SelectionSort(arr, arr.size());    // Pass the vector and its size

    // Optional: Print the sorted array to verify
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
