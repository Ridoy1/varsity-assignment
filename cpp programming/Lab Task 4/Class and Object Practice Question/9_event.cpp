//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Event
{
private:
    string name;
    string date;
    string location;

public:
    void inputEvent()
    {
        getline(cin, name);
        getline(cin, date);
        getline(cin, location);
    }

    void displayDetails()
    {
        cout << "\n--- Event Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Date: " << date << endl;
        cout << "Location: " << location << endl;
    }
};

int main()
{
    Event myEvent;

    myEvent.inputEvent();
    myEvent.displayDetails();

    return 0;
}
