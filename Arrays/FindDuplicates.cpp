#include <iostream>
using namespace std;

int findDuplicate(int arr[])
{
    int ans = 0;

    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
        cout << "this is the answer: " << ans << endl;
    }
    cout << "break" << endl;
    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
        cout << "this is the answer: " << ans << endl;
    }
    return ans;
}

int main()
{

    int arr[] = {4, 2, 3, 1, 3};
    int result = findDuplicate(arr);
    cout << result << endl;
    return 0;
}