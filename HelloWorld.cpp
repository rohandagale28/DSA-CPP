// #include <iostream>
// #include <map>
// using namespace std;

// // void count(int *arr, int size)
// // {
// //     map<int, int> mymap;

// //     for (int i = 0; i < size; i++)
// //     {
// //         if (mymap.find(arr[i]) != mymap.end())
// //         {
// //             mymap[arr[i]] = mymap[arr[i]] + 1;
// //         }
// //         else
// //         {
// //             mymap[arr[i]] = 1;
// //         }
// //     }

// //     for (const auto& pair : mymap)
// //     {
// //         cout << "Element " << pair.first << " appears " << pair.second << " times." << endl;
// //     }
// // }

// int main()
// {
//     // int arr[10] = {1, 2, 1, 1, 2, 3, 4, 4, 5, 6};
//     // count(arr, 10);

//     for (int i = 0; i < 10000; i++)
//     {
//        cout<<i<<endl;
//     }

//     return 0;
// }

#include <iostream>
#include <chrono>
using namespace std;

// Sample function
void someFunction()
{
    for (int i = 0; i < 10000; ++i)
    {
        cout << i << endl;
    }
}

int main()
{
    // Record the start time
    auto start = std::chrono::high_resolution_clock::now();

    // Call the function you want to time
    someFunction();

    // Record the end time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration in microseconds
    auto duration = std::chrono::duration_cast<std::chrono::minutes>(end - start);

    // Print the time taken
    std::cout << "Time taken by function: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
