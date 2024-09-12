#include <iostream>
using namespace std;

// Function to print wave pattern of the array column-wise
void printWave(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0) // For even index, print top to bottom
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << ' ';
            }
        }
        else // For odd index, print bottom to top
        {
            for (int j = 2; j >= 0; j--)
            {
                cout << arr[i][j] << ' ';
            }
        }
        cout << endl;
    }
}



int main()
{
    int arr[3][3];

    // Input for the 3x3 array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxSum = 0;
    int rowIndex = -1;

    // Loop through rows to find the row with the largest sum
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
            cout << arr[i][j] << ' '; // Corrected output for row elements
        }
        cout << " -> Sum of row " << i << " is: " << sum << endl;

        // Find the row with the largest sum
        if (sum > maxSum)
        {
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout << "The largest sum is: " << maxSum << endl;
    cout << "The index of the row with the largest sum is: " << rowIndex << endl;

    // Print the array in wave form column-wise
    cout << "Wave print of array column-wise:" << endl;
    printWave(arr);

    return 0;
}
