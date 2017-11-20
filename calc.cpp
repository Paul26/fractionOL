#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	char		choice;
	fraction	left;
	fraction	right;
	fraction	result;

	do
	{
		cout << "A\tAdd\n";
		cout << "S\tSub\n";
		cout << "M\tMult\n";
		cout << "D\tDiv\n";
		cout << "E\tExit\n";

		cout << "\nChoice?: ";

		cin >> choice;
		cin.ignore();

		switch (choice)
		{
			case 'A':
			case 'a':
				cin >> left;
				cin >> right;

				result = left + right;

				cout << result << endl;
				break;

			case 'S':
			case 's':
				cin >> left;
				cin >> right;

				result = left - right;

				cout << result << endl;;
				break;

			case 'M':
			case 'm':
				cin >> left;
				cin >> right;

				result = left * right;

				cout << result << endl;
				break;

			case 'D':
			case 'd':
				cin >> left;
				cin >> right;

				result = left / right;

				cout << result << endl;
				break;

			case 'e':
			case 'E':
				break;

			default :
				cerr << "Unrecognized choice: " <<
					choice << endl;
				break;
		}
	}
	while (choice != 'e' && choice != 'E');

	return 0;
}
