
#include <iostream> // Includes the input/output library
using namespace std; // Allows us to use cout and cin without std::

// Class representing a shop item
class ShopItem
{
    int id;       // Stores the ID of the item
    float price;  // Stores the price of the item

public:
    // Function to assign values to id and price
    void setData(int a, float b)
    {
        id = a;      // Assigns a to id
        price = b;   // Assigns b to price
    }

    // Function to display item details
    void getData(void)
    {
        cout << "Code of this item is: " << id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};

int main()
{
    int size = 3; // Specifies that we want to store 3 items

    // Dynamically creates an array of 3 ShopItem objects
    // 'new' allocates memory at runtime
    ShopItem *ptr = new ShopItem[size];

    // Saves the starting address of the array
    // This pointer will be used later to display the data
    ShopItem *ptrTemp = ptr;

    int p, i;    // p stores the item ID; i is the loop counter
    float q;     // q stores the item price

    // Loop to input data for all 3 items
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of item" << i + 1 << endl;
        cin >> p >> q; // Reads the ID and price from the user

        // (*ptr).setData(p, q); // Alternative way to call a function using a pointer

        ptr->setData(p, q);
        // The arrow operator (->) accesses a member through a pointer
        // Equivalent to (*ptr).setData(p, q)

        ptr++; // Moves the pointer to the next ShopItem object
    }

    // Loop to display the data of all 3 items
    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;

        ptrTemp->getData(); // Displays the current item's details

        ptrTemp++; // Moves to the next ShopItem object
    }

    delete[] ptrTemp; // Incorrect: ptrTemp has moved past the array
                      // Do not delete using this pointer position

    return 0; // Indicates successful program execution
}
