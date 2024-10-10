#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{

};

class German: public Dog {

};

int
main()
{
    German g;
    g.speak();
    return 0;
}