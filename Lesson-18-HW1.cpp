#include <iostream>
#include "Employee.h"

int main()
{
	Employee arr[5];
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
    cout << "\nData from array:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Last name: " << arr[i].lastName << ", ";
        cout << "Year of birth: " << arr[i].yearOfBirth << ", ";
        cout << "Position: " << arr[i].position << ", ";
        cout << "Salary: " << arr[i].salary << ", ";
        cout << "Education: " << arr[i].education << endl;
    }
}