#include <iostream>
#include <map>
using namespace std;

void count(int *arr, int size)
{
    map<int, int> mymap;

    for (int i = 0; i < size; i++) 
    {
        if (mymap.find(arr[i]) != mymap.end()) 
        {
            mymap[arr[i]] = mymap[arr[i]] + 1;
        }
        else
        {
            mymap[arr[i]] = 1;
        }
    }

    for (const auto& pair : mymap)  
    {
        cout << "Element " << pair.first << " appears " << pair.second << " times." << endl;
    }
}

int main()
{
    int arr[10] = {1, 2, 1, 1, 2, 3, 4, 4, 5, 6};  
    count(arr, 10); 
    return 0;
}
