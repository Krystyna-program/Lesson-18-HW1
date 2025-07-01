#include <iostream>
#include "Employee.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Employee arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Введіть прізвище: ";
        cin.ignore();  
        cin.getline(arr[i].lastName, 100);

        cout << "Введіть рік народження: ";
        cin >> arr[i].yearOfBirth;

        cout << "Введіть посаду: ";
        cin.ignore();  
        cin.getline(arr[i].position, 100);

        cout << "Введіть зарплату: ";
        cin >> arr[i].salary;

        cout << "Введіть освіту: ";
        cin.ignore(); 
        cin.getline(arr[i].education, 100);
    }

    cout << "\nДані з масиву:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Прізвище: " << arr[i].lastName << ", ";
        cout << "Рік народження: " << arr[i].yearOfBirth << ", ";
        cout << "Посада: " << arr[i].position << ", ";
        cout << "Зарплата: " << arr[i].salary << ", ";
        cout << "Освіта: " << arr[i].education << endl;
    }
}