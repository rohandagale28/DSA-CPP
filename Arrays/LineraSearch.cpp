#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
        return false;
    }
}

int main()
{
    int arr[10] = {5, 7, 8, -5, 22, 6, 3, 5, 4 -1, 10};

    cout << "Enter the element to serahc" << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }

    return 0;
}