#include <iostream>;
#include <fstream>;
using namespace std;

int main()
{
	bool repeat = true;

	while (repeat)
	{
		//Declaring operator and numbers
		double number1, number2, result;
		char op;

		//Getting nicer cmd
		system("color a");
		system("title Darkware Calculator");

		//Making a question for the example
		cout << "Please enter the first number: ";
		cin >> number1;
		cout << "Please enter the operator: ";
		cin >> op;
		cout << "Please enter the second number: ";
		cin >> number2;

		//Making the if's to make tha calculator
		if (op == '+')
		{
			result = number1 + number2;
		}

		if (op == '-')
		{
			result = number1 - number2;
		}

		if (op == '*')
		{
			result = number1 * number2;
		}

		if (op == '/')
		{
			result = number1 * number2;
		}

		//Displaying the result
		cout << "The result is ";
		cout << result << endl;

		//Asking for repeat
		cout << "Repeat? [y/n]" << endl;
		char answer;
		cin >> answer;
		repeat = answer == 'y';
		system("cls");

	}
	cout << "Thank you, goodbye" << endl;

};