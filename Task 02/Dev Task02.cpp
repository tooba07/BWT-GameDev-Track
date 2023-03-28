#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int a;
	do
	{
		cout << "Welcome User!" << endl;
		cout << "What do you want to do?" << endl;
		cout << "(Choose a number)" << endl;
		cout << "1. Find maximum value\n2. Find sum of numbers\n3. Find table\n4. Exit " << endl;
		cin >> a;
		switch (a)
		{
		case 1:
		{
			int n;
			cout << "Enter number of values:";
			cin >> n;
			int max = 0;
			int digit;
			cout << "Enter values:" << endl;
			for (int i = 0; i < n; i++)
			{
				cin >> digit;
				if (digit > max)
				{
					max = digit;
				}
				else
					continue;
			}
			cout << "Maximum value is " << max << endl;
			cout << endl;
			break;
		}
		case 2:
		{
			int num;
			int sum = 0;
			int val;
			cout << "Enter number of values: ";
			cin >> num;
			cout << "Enter values:" << endl;
			for (int i = 0; i < num; i++)
			{
				cin >> val;
				sum = sum + val;
			}
			cout << "Sum is " << sum << endl;
			cout << endl;
			break;

		}
		case 3:
		{
			int t,c;
			c = 0;
			cout << "Enter number: ";
			cin >> t;
			while (c < 11)
			{
				cout << t << " x " << c << " = " << c * t << endl;
				c++;
			}
			cout << endl;
			break;

		}
		case 4:
		{
			cout << "Thank you!" << endl;
			cout << "You are now exiting..." << endl;
			break;

		}
		default:
		{
			cout << "Wrong Input" << endl;
			break;
		}
		}
	} while (a != 4);
	system("pause");
	return 0;
}

