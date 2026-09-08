#pragma once
#include "string"
using namespace std;
class Student {
	string name;
	int course;
	bool sex;
public:
	Student();
	Student(string name, int course, bool sex);
	Student(const Student& other);
	~Student();
	void SetName(string name);
	void SetCourse(int course);
	void SetSex(bool sex);
	string GetName();
	int GetCourse();
	bool GetSex();	
	void ShowInfo();
};