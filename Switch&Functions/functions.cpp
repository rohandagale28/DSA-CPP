#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i <= b; i++)
    {
        ans *= a;
    }
    return ans;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    // int num = 1;
    // char ch = '1';

    // switch (ch)
    // {
    // case 1:
    //     cout << "One";
    //     break;
    // case 2:
    //     cout << "Two";
    //     break;
    // case '1':
    //     switch (num)
    //     {
    //     case 1:
    //         cout << "value of num is : " << num << endl;
    //         break;
    //     }
    //     break;
    // default:
    //     cout << "itls a default value" << endl;
    // }

    // int a, b;
    // cin >> a >> b;

    int n;
    cin >> n;
    int primes = isPrime(n);
    cout << primes << endl;

    // int result = power(a, b);
    // cout << result << endl;
    return 0;
}