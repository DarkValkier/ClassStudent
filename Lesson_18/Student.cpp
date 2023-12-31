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
Student::Student(const Student& _source) : name(_source.name), birthday(_source.birthday),
group(_source.group), grades_count(_source.grades_count) {
	grades = new int[_source.grades_count];
	for (int i = 0; i < _source.grades_count; i++) {
		grades[i] = _source.grades[i];
	}
}

Student::~Student() {
	delete[] grades;
}

void Student::print_info() {
	cout << "������� " << name << endl;
	cout << "���� ��������: " << birthday.as_string() << endl;
	cout << "������: " << group << endl;
	cout << "������: ";
	for (int i = 0; i < grades_count; i++)
		cout << grades[i] << " ";
	cout << endl;
	cout << "��. ����: " << round(get_gpa() * 10) / 10 << endl;
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

void Student::set_grade(unsigned int _index, int _value) {
	grades[_index] = _value;
}