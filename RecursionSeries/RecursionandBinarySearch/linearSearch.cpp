// C++ Recursive Code For Linear Search
#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return -1;
    }
    else if (arr[size - 1] == key)
    {
        return size - 1;
    }
    return linearsearch(arr, size - 1, key);
}

int main()
{
    int arr[8] = {2, 5, 6, 9, 3, 4, 5, 7};
    int key = 3;

    int ans = linearsearch(arr, 5, key);
    if (ans == -1)
    {
        cout << "The element " << key << " is not found."
             << endl;
    }
    else
    {
        cout << "The element " << key << " is found at "
             << ans << " index of the given array." << endl;
    }
    return 0;
}
