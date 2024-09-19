#include <iostream>
using namespace std;

void update(int &n){
    n++;
}

int main()
{
    int i = 5;
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    cout << j << endl;
    j++;    
    cout << j<<endl;

    cout << &i << endl;
    cout << &j << endl;

    int n = 5;
    cout<<"before: "<<n<<endl;
    update(n);
    cout<<"after: "<<n<<endl;
}