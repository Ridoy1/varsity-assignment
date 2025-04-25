//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    string make;
    string model;
    int year;
    int mileage;

public:
    void cars(string mk, string mdl, int yr, int mil)
    {
        make = mk;
        model = mdl;
        year = yr;
        mileage = mil;
    }
    void getInfo()
    {
        cout << "Make:" << make << " - Model: " << model << " - Year: " << year << " - Mileage: " << mileage << endl;
    }

    void updateMillage(int addMileage)
    {
        mileage += addMileage;
    }
    int isLuxury()
    {
        if (mileage >= 1500)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    string make, model;
    int year, mileage, upMileage;

    cin >> make;
    cin >> model;
    cin >> year;
    cin >> mileage;

    cout << "Enter your Update mileage" << endl;
    cin >> upMileage;
    car myCar;
    myCar.cars(make, model, year, mileage);
    myCar.getInfo();

    myCar.updateMillage(upMileage);
    cout << endl
         << "Update mileage\n"
         << endl;
    myCar.getInfo();

    if (myCar.isLuxury())
    {
        cout << "This is a luxury car." << endl;
    }
    else
    {
        cout << "This is not a luxury car." << endl;
    }
    return 0;
}