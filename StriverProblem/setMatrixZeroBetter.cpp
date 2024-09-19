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

void removeZero(int arr[][4])
{
    int row[4] = {0};
    int col[4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (row[i] || col[j])
            {
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{

    int arr[4][4] = {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1};
    removeZero(arr);

    printArray(arr);
    return 0;
}