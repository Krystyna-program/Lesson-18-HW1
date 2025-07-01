#include <iostream>
#include "Employee.h"

int main()
{
    Employee arr[5];
    const int CURRENT_YEAR = 2025; 
    int countOlderThan60 = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter last name: ";
        cin.ignore();
        cin.getline(arr[i].lastName, 100);

        cout << "Enter year of birth: ";
        cin >> arr[i].yearOfBirth;

        cout << "Enter position: ";
        cin.ignore();
        cin.getline(arr[i].position, 100);

        cout << "Enter salary: ";
        cin >> arr[i].salary;

        cout << "Enter education: ";
        cin.ignore();
        cin.getline(arr[i].education, 100);
    }

    cout << "\nEmployees older than 60:\n";
    for (int i = 0; i < 5; i++)
    {
        int age = CURRENT_YEAR - arr[i].yearOfBirth;
        if (age > 60)
        {
            countOlderThan60++;
            cout << "Last name: " << arr[i].lastName << ", ";
            cout << "Year of birth: " << arr[i].yearOfBirth << ", ";
            cout << "Age: " << age << ", ";
            cout << "Position: " << arr[i].position << ", ";
            cout << "Salary: " << arr[i].salary << ", ";
            cout << "Education: " << arr[i].education << endl;
        }
    }
    cout << "\nTotal employees older than 60: " << countOlderThan60 << endl;
}