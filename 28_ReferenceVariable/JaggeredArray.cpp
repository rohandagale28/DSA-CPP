#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    // int col;
    // cin>>col;

    int **arr = new int *[row];

    // creating 2D array
    for (int i = 0; i < row; i++)
    {
        int col;
        cout << "Enter the size of col: " << endl;
        cin >> col;
        arr[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking input
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // taking output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizeof(arr) / sizeof(arr[i]); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // // releasing memory
    // for (int i = 0; i < row; i++)
    // {
    //     delete[] arr[i];
    // }
    // delete[] arr;

    return 0;
}