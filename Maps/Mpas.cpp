#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> myMap;

    myMap[1] = 10;
    myMap[2] = 20;
    myMap[3] = 30;

    for (int i = 1; i < myMap.size() + 1; i++)
    {
        myMap[i]++;
    }

    cout << myMap[1] << endl;
    cout << myMap[2] << endl;
    cout << myMap[3] << endl;

    cout << myMap.size() << endl;
}