#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {}
Student::Student(
	string _name, 
	date _birthday, 
	string _group, 
	int _grades[],
	int _grades_count) : name(_name), birthday(_birthday),
	group(_group), grades_count(_grades_count) {
	grades = new int[_grades_count];
	for (int i = 0; i < _grades_count; i++) {
		grades[i] = _grades[i];
	}
}

Student::~Student() {
	delete[] grades;
}

void Student::print_info() {
	cout << "Студент " << name << endl;
	cout << "День рождения: " << birthday.as_string() << endl;
	cout << "Группа: " << group << endl;
	cout << "Ср. балл: " << round(get_gpa() * 10) / 10 << endl;
}

double Student::get_gpa() {
	if (grades_count == 0)
		return .0;
	int sum = 0;
	for (int i = 0; i < grades_count; i++) {
		sum += grades[i];
	}
	return (double)sum / (double)grades_count;
}

string Student::get_name() {
	return name;
}

void Student::set_name(string _name) {
	name = _name;
}