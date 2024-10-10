#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "hello love babbar" << endl;
    }
    int sayHello(char name)
    {
        cout << "hello char love" << endl;
        return 1;
    }
    void sayHello(string name)
    {
        cout << "hello " << name << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
    obj.sayHello("rohan");

    
    return 0;
}