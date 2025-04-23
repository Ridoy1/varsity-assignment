// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void convertToFahrenheit(float celsius[], float fahrenheit[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fahrenheit[i] = (celsius[i] * 9 / 5) + 32;
    }
}

int main()
{
    int n;
    cout << "Enter number of temperatures: ";
    cin >> n;

    float celsius[100], fahrenheit[100];

    for (int i = 0; i < n; i++)
    {
        cin >> celsius[i];
    }

    convertToFahrenheit(celsius, fahrenheit, n);

    cout << "\nTemperatures in Fahrenheit:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Celsius: " << celsius[i] << " => Fahrenheit: " << fahrenheit[i] << endl;
    }

    return 0;
}
