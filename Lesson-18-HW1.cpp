#include <iostream>
#include "Employee.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Employee arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "������ �������: ";
        cin.ignore();  
        cin.getline(arr[i].lastName, 100);

        cout << "������ �� ����������: ";
        cin >> arr[i].yearOfBirth;

        cout << "������ ������: ";
        cin.ignore();  
        cin.getline(arr[i].position, 100);

        cout << "������ ��������: ";
        cin >> arr[i].salary;

        cout << "������ �����: ";
        cin.ignore(); 
        cin.getline(arr[i].education, 100);
    }

    cout << "\n��� � ������:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "�������: " << arr[i].lastName << ", ";
        cout << "г� ����������: " << arr[i].yearOfBirth << ", ";
        cout << "������: " << arr[i].position << ", ";
        cout << "��������: " << arr[i].salary << ", ";
        cout << "�����: " << arr[i].education << endl;
    }
}