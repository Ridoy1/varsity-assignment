// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
    float salary;
};

void updateSalary(Employee emp[], int n, float percentage)
{
    for (int i = 0; i < n; i++)
    {
        emp[i].salary += emp[i].salary * (percentage / 100);
    }
}

void outputEmp(Employee emp[], int n)
{
    cout << "\nUpdated Employee Records:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "ID: " << emp[i].id << ", Name: " << emp[i].name << ", Salary: " << emp[i].salary << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    Employee emp[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> emp[i].id;
        cout << "Name: ";
        cin >> emp[i].name;
        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    float percentage;
    cout << "Enter your salary :" << endl;
    cin >> percentage;

    updateSalary(emp, n, percentage);

    outputEmp(emp, n);
    return 0;
}