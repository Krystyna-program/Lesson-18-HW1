#include <iostream>
#include "Employee.h"

int main()
{
    const int SIZE = 5;
    const int CURRENT_YEAR = 2025;
    Employee arr[SIZE];
    int countOlderThan60 = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "--- Employee #" << (i + 1) << " ---\n";

        cout << "Enter last name: ";
        cin >> arr[i].lastName;
        cin.ignore(1000, '\n');

        cout << "Enter year of birth: ";
        cin >> arr[i].yearOfBirth;
        cin.ignore(1000, '\n'); 

        cout << "Enter position: ";
        cin.getline(arr[i].position, 100);

        cout << "Enter salary: ";
        cin >> arr[i].salary;
        cin.ignore(1000, '\n');  

        cout << "Enter education: ";
        cin.getline(arr[i].education, 100);
    }
    cout << "\n=== Employees older than 60 ===\n";
    for (int i = 0; i < SIZE; i++)
    {
        int age = CURRENT_YEAR - arr[i].yearOfBirth;
        if (age > 60)
        {
            countOlderThan60++;
            cout << "\nEmployee #" << (i + 1) << ":\n";
            cout << "Last name: " << arr[i].lastName << "; ";
            cout << "Year of birth: " << arr[i].yearOfBirth << "; ";
            cout << "Age: " << age << "; ";
            cout << "Position: " << arr[i].position << "; ";
            cout << "Salary: " << arr[i].salary << "; ";
            cout << "Education: " << arr[i].education << "\n";
        }
    }
    cout << "\nTotal employees older than 60: " << countOlderThan60 << endl;
}