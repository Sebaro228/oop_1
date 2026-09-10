#pragma once
#include "string"
using namespace std;
class Rectangle {
	int a, b;
public:
	Rectangle();
	Rectangle(int a, int b);
	void Init();
	int Area();
	int Perimeter();
	void ShowSides();
	void ShowAreaAndPerimeter();
	int GetSideA();
	int GetSideB();
	void SetSideA(int a);
	void SetSideB(int b);
	bool IsSquare();
	void ShowIfSquare();
	Rectangle operator++();
	Rectangle operator--();
	operator bool();
	Rectangle operator*(int multiplier);
	operator string();
};				