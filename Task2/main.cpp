#include "iostream"
#include "Rectangle.h"
using namespace std;
int main() {
	Rectangle rect;
	int multiplier;
	rect.Init();
	rect.ShowSides();
	rect.ShowAreaAndPerimeter();
	rect.ShowIfSquare();
	++rect;
	cout << "Incremented rectangle:\n";
	rect.ShowSides();
	--rect;
	cout << "Decremented rectangle:\n";
	rect.ShowSides();
	cout << "Enter multiplier for sides: ";
	cin >> multiplier;
	Rectangle multipliedRect = rect * multiplier;
	cout << "Multiplied rectangle:\n";
	multipliedRect.ShowSides();
	string rectStr = string(rect);
	cout << "Rectangle as string:\n" << rectStr;
}