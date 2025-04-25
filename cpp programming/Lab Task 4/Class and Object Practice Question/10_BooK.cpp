//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string bookID;
    string title;
    string author;

public:
    void inputBook()
    {
        getline(cin, bookID);
        getline(cin, title);
        getline(cin, author);
    }
    void checkOut(char checkoutA)
    {
        if (checkoutA == 'Y' || checkoutA == 'y')
        {
            cout << "The book has been checked out.\n";
        }
        else
        {
            cout << "The book is already checked out.\n";
        }
    }
    void returnBook(char checkoutB)
    {
        if (checkoutB == 'Y' || checkoutB == 'y')
        {
            cout << "The book has been returned.\n";
        }
        else
        {
            cout << "The book is Not return.\n";
        }
    }
    void displayDetails()
    {
        cout << "\n--- Book Details ---\n";
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    Book myBook;

    myBook.inputBook();
    char checkoutA;
    cin >> checkoutA;
    myBook.checkOut(checkoutA);
    char checkoutB;
    cin >> checkoutB;
    myBook.returnBook(checkoutB);
    myBook.displayDetails();

    return 0;
}
