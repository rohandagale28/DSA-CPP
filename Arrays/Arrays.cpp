#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Function for printing arrays" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    // declare
    int numbers[15];

    // accessing an array
    cout << numbers[20] << endl;

    int second[3] = {4, 6, 7};

    cout << second[2] << endl;

    int third[15] = {2, 5};
    printArray(third, 15);



    

    cout
        << endl
        << "everthing is fine" << endl
        << endl;

    return 0;
}