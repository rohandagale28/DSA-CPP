#include <iostream> //preprocessor directive
using namespace std;

void printArray(int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void markRow(int arr[][4], int n)
{
    for (int i = 0; i < 4; i++)
    {
        if (arr[n][i] != 0)
        {
            arr[n][i] = -1;
        }
    }
}

void markCol(int arr[][4], int n)
{
    for (int i = 0; i < 4; i++)
    {
        if (arr[i][n] != 0)
        {
            arr[i][n] = -1;
        }
    }
}

void finalResult(int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

void removeZero(int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 0)
            {
                markRow(arr, i);
                markCol(arr, j);
            }
        }
    }
}

int main()
{
    int arr[4][4] = {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1};

    removeZero(arr);
    printArray(arr);
    finalResult(arr);
    printArray(arr);

    return 0;
}