#include <iostream>
using namespace std;

int getmax(int arr[], int n)
{
    int max = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cin >> size;

    int num[100]; // bad practice

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << getmax(num, size) << "is max value" << endl;

    return 0;
}