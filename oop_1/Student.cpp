#include "Student.h"
#include "iostream"
using namespace std;
Student::Student() : name("Sebastian"), course(1), sex(1) {
		cout << "Base constructor\n";
}
Student::Student(string name, int course, bool sex) : name(name), course(course), sex(sex) {
		cout << "Constructor\n";
}
Student::Student(const Student& other) : name(other.name), course(other.course), sex(other.sex) {
		cout << "Copy constructor\n";
}
Student::~Student() {
		cout << "Destructor\n";
}
void Student::SetName(string name) { this->name = name; }
void Student::SetCourse(int course) { this->course = course; }
void Student::SetSex(bool sex) { this->sex = sex; }
string Student::GetName() { return name; }
int Student::GetCourse() { return course; }
bool Student::GetSex() { return sex; }
void Student::ShowInfo() {
		cout << "Name: " << name << ", Course: " << course << ", Sex: " << (sex ? "male\n" : "female\n");
}