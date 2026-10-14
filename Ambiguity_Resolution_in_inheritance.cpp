#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
#include <iostream> // Includes the input/output library for cout and endl
using namespace std; // Allows us to use cout and endl without writing std::

// First base class
class Base1
{
public:
    // Function to display a greeting
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};

// Second base class
class Base2
{
public:
    // Function with the same name as Base1's greet()
    void greet()
    {
        cout << "Kaise Ho ?" << endl;
    }
};

// Derived class inherits publicly from both Base1 and Base2
class Derived : public Base1, public Base2
{
    int a; // Data member of the Derived class

public:
    // Defines its own greet() function to resolve ambiguity
    void greet()
    {
        // Explicitly calls the greet() function of Base2
        Base2::greet();
    }
};

int main()
{
    // Ambiguity 1:
    // Both Base1 and Base2 have a function named greet().
    // Calling d.greet() could be ambiguous without a resolution.

    Base1 base1obj; // Creates an object of Base1
    Base2 base2obj; // Creates an object of Base2

    base1obj.greet(); // Calls Base1's greet()
    base2obj.greet(); // Calls Base2's greet()

    Derived d; // Creates an object of the Derived class
    d.greet(); // Calls Derived's greet(), which calls Base2's greet()

    return 0; // Indicates successful program execution
}

    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise Ho ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    }
};

int main()
{
    // Ambiguity 1

    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();

    return 0;
}
