#include "iostream"
#include "Student.h"
using namespace std;
int main() {
	Student student = Student("Sasha", 3, 1);
	Student* s = &student;
	void(Student:: * SetNamePtr)(string) = &Student::SetName;
	void(Student:: * SetCoursePtr)(int) = &Student::SetCourse;
	void(Student:: * SetSexPtr)(bool) = &Student::SetSex;
	string(Student:: * GetNamePtr)() = &Student::GetName;
	int(Student:: * GetCoursePtr)() = &Student::GetCourse;
	bool(Student:: * GetSexPtr)() = &Student::GetSex;
	(s->*SetNamePtr)("Sebastian");
	s->ShowInfo();
}