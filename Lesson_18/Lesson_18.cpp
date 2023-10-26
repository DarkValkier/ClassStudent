#include <iostream>
#include "Student.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student s1;
    s1.print_info();

    cout << endl;
    int grades[] = { 8, 9, 10, 10, 9 };
    Student s2("Олег", { 25, 04, 1997 }, "П1", 
        grades, 5);
    s2.print_info();

    cout << "Имя второго студента: " << s2.get_name() << endl;
}
