#include <iostream>
#include <cmath>
using namespace std;

int main() {
	char op;
	float num1, num2;
	cout << "Enter the operation(+,-,*,/,^): ";
	cin >> op;

	cout << "Enter the 1 number: ";
	cin >> num1;

	cout << "Enter the 2 number: ";
	cin >> num2;

	switch (op) {
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2;
		break;

	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2;
		break;

	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2;
		break;

	case '/':
		cout << num1 << " / " << num2 << " = " << num1 / num2;
		break;

	case '^':
		cout << num1 << " ^ " << num2 << " = " << pow(num1, num2);
		break;
	default:
		cout << "Mistake -_____-";
		break;
	}

	return 0;
}