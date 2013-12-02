#include <iostream>
#include "conio.h"
using namespace std;

int main()
{

	int input = 1;

	while (input > 0)
	{
		int total = 0;

		cout << "Enter a number greater than 0 (less than 1 to quit): ";
		cin	>> input;

		int limit = input;

		while (input > 1) 
		{
			total += input * input;
			input--;
		}

		cout << "The sum of the squares from 1 to " << limit << " is " << total + 1 << endl;

	}


	_getch();
}
