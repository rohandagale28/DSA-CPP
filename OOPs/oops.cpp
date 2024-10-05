#include <iostream>
#include <map>
#include <cstring> // For strlen and strcpy

using namespace std;

class Hero
{
private:
    // proppertiess
    int health; // getters and setters

public: // access modifiers
    // Properties
    char *name;
    char level;
    static int timeToComplete;
    //==========|| constructors ||=========//
    Hero()
    {
        cout << "constructor called " << endl;
        name = new char[100];
    }
    Hero(int health, char level)
    {
        // cout << "this is the value of this keyword: " << this << endl;
        this->health = health;
        this->level = level;
    }
    // deep copy constructor
    // Deep copy constructor
    Hero(Hero &temp)
    {
        cout << "Deep copy constructor called" << endl;

        // Allocate new memory for name
        this->name = new char[strlen(temp.name) + 1]; // +1 for null terminator

        // Copy the name from the source object
        strcpy(this->name, temp.name);

        // Copy other attributes
        this->health = temp.health;
        this->level = temp.level;
    }

    //===========|| member functions ||==========//
    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "health: " << this->health << endl;
        cout << "level: " << this->level << endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int x)
    {
        health = x;
    }
    void setLevel(int L)
    {
        level = L;
    }
    void setName(char name[])
    {
        strcpy(this->name, name); // Copy string to the object's name
    }
    static int random()
    {
        return timeToComplete = timeToComplete + 1;
    }
    //==========|| constructors ||=========//
    ~Hero()
    {
        cout << "constructore distroyed" << endl;
        delete[] name;
    }
};

int Hero::timeToComplete = 0;

int main()
{
    // creation of object
    // Hero ramesh; //static allocation
    // cout<<sizeof(ramesh)<<endl;

    // ramesh.setHealth(80);
    // cout << "ramesh health is private: " << ramesh.getHealth() << endl;
    // // ramesh.health = 80;
    // ramesh.level = 'A';
    // // cout << ramesh.health << endl;
    // cout << ramesh.level << endl;
    // ramesh.print();

    // dynamic allocation of Hero class
    // Hero *b = new Hero;
    // b->setHealth(80);
    // cout << (*b).getHealth() << endl;

    // Hero S(80, 'c');

    // S.print();
    // cout << "address of S: " << &S << endl;
    // // copy constructor
    // Hero R(S);

    // R.print();

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "babbar";
    hero1.setName(name);
    hero1.print();

    // user default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'g';
    hero1.print();
    hero2.print();

    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    cout << "This code is on line " << __LINE__ << " in file " << __FILE__ << std::endl;
    return 0;
}