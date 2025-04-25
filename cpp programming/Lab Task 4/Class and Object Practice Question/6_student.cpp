//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentID;
    string name;
    int grades[100];
    int gradeCount;

public:
    void setStudent()
    {
        cin >> studentID;
        cin.ignore();
        getline(cin, name);
        cin >> gradeCount;
        for (int i = 0; i < gradeCount; i++)
        {
            cin >> grades[i];
        }
    }

    void addGrade(int grade)
    {
        if (gradeCount < 100)
        {
            grades[gradeCount] = grade;
            gradeCount++;
        }
    }

    double calculateAverage()
    {
        if (gradeCount == 0)
            return 0;

        int sum = 0;
        for (int i = 0; i < gradeCount; i++)
        {
            sum += grades[i];
        }
        return (sum * 1.0) / gradeCount;
    }

    void displayAverage()
    {
        cout << "Average Grade for " << name << " (ID: " << studentID << "): ";
        cout << calculateAverage() << endl;
    }
};

int main()
{
    Student s;

    s.setStudent();

    int extraCount;
    cin >> extraCount;
    for (int i = 0; i < extraCount; i++)
    {
        int newGrade;
        cin >> newGrade;

        s.addGrade(newGrade);
    }

    s.displayAverage();

    return 0;
}
