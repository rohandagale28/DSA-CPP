#include <iostream> //preprocessor directive
using namespace std;

void print(int arr[], int n, int start = 0) //default args always starts with right most 
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1, 4, 6, 5, 3};
    print(arr, 5);

    return 0;
}