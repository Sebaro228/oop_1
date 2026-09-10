#include "Rectangle.h"
#include "iostream"
#include "string"
using namespace std;
Rectangle::Rectangle() : a(5), b(5) {}
Rectangle::Rectangle(int a, int b) : a(a), b(b) {}
void Rectangle::Init() {
	cout << "Enter side A: ";
	cin >> a;
	cout << "Enter side B: ";
	cin >> b;
	SetSideA(a);
	SetSideB(b);
}
int Rectangle::Area() {
	return a * b;
}
int Rectangle::Perimeter() {
	return 2 * (a + b);
}
void Rectangle::ShowSides() {
	cout << "Side A: " << a << ", Side B: " << b << '\n';
}
void Rectangle::ShowAreaAndPerimeter() {
	cout << "Area: " << Area() << ", Perimeter: " << Perimeter() << '\n';
}
int Rectangle::GetSideA() {
	return a;
}
int Rectangle::GetSideB() {
	return b;
}
void Rectangle::SetSideA(int a) {
	this->a = a;
}
void Rectangle::SetSideB(int b) {
	this->b = b;
}
bool Rectangle::IsSquare() {
	return a == b;
}
void Rectangle::ShowIfSquare() {
	if (IsSquare())
		cout << "This is a square\n";
	else
		cout << "This is not a square\n";
}
Rectangle Rectangle::operator++() {
	++a;
	++b;
	return *this;
}
Rectangle Rectangle::operator--() {
	--a;
	--b;
	return *this;
}
Rectangle::operator bool() {
	return a == b;
}
Rectangle Rectangle::operator*(int multiplier) {
	return Rectangle(a * multiplier, b * multiplier);
}
Rectangle::operator string() {
	string rectangle = "";
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < b; ++j) 
			if (!i || !j || i == a - 1 || j == b - 1)
				rectangle += "*";
			else
				rectangle += " ";
		rectangle += "\n";
	}
	return rectangle;
}