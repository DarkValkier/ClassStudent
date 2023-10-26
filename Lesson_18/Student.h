#pragma once
#include <string>

using namespace std;
/*
	class Student - описывает студента

	ПОЛЯ:
	name - имя
	birthday - день рождения
	group - группа
	gpa - средний балл

	МЕТОДЫ:
	print_info - вывод данных о студенте
*/

struct date {
	int day, month, year;

	string as_string() {
		return to_string(day) + "." +
			to_string(month) + "." +
			to_string(year);
	}
};

class Student
{
	string name = "";
	date birthday = {01, 01, 00};
	string group = "";
	int* grades = nullptr;
	int grades_count = 0;

public:
	Student();
	Student(string, date, string, int[], int);
	Student(const Student&);
	~Student();

	void print_info();
	double get_gpa();

	string get_name();
	void set_name(string _name);
	void set_grade(unsigned int, int);
};

