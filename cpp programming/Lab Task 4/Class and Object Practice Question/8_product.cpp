//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string productID;
    string name;
    float price;
    int quantity;

public:
    void inputProduct()
    {
        getline(cin, productID);
        getline(cin, name);
        cin >> price;
        cin >> quantity;
    }
    void updateQuantity(int newQty)
    {
        quantity = newQty;
    }

    void displayDetails()
    {
        cout << "\n--- Product Details ---\n";
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main()
{
    Product prod;

    prod.inputProduct();

    int newQty;
    cin >> newQty;

    prod.updateQuantity(newQty);

    prod.displayDetails();

    return 0;
}
