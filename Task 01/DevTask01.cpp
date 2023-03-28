#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int addition()
{
	int x = rand();
	int y = rand();
	int z;
	cout << x << " + " << y << " = ";
	cin >> z;
	if (x + y == z)
		cout << "Your answer is correct" << endl;
	else
		cout << "Your answer is wrong" << endl;
	    cout << "Correct answer is " <<x+y<< endl;
		return 0;

}

int subtraction()
{
	int x = rand();
	int y = rand();
	int z;
	cout << x << " - " << y << " = ";
	cin >> z;
	if (x - y == z)
		cout << "Your answer is correct" << endl;
	else
		cout << "Your answer is wrong" << endl;
	cout << "Correct answer is " << x - y << endl;
	return 0;

}

int multiplication()
{
	int x = rand();
	int y = rand();
	int z;
	cout << x << " x " << y << " = ";
	cin >> z;
	if (x * y == z)
		cout << "Your answer is correct" << endl;
	else
		cout << "Your answer is wrong" << endl;
	    cout << "Correct answer is " << x * y << endl;
	return 0;

}

int division()
{
	float x = rand();
	float y = rand();
	float z;
	cout << x << " / " << y << " = ";
	cin >> z;
	if (x / y == z)
		cout << "Your answer is correct" << endl;
	else
		cout << "Your answer is wrong" << endl;
	    cout << "Correct answer is " << x / y << endl;
	return 0;

}


int main()
{
	string name;
	int choice;
	char ch;
	cout << "Enter your name:" << endl;
	cin >> name;
	cout << "Welcome " << name << endl;
start:
		cout << "---Choose domain of quiz---\n(Choose a number)" << endl;
		cout << "1.Additon\n2.Subtraction\n3.Multiplication\n4.Division" << endl;
		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "---ADDITON---" << endl;
			addition();
			cout << "Do you want to go to menu?" << endl;
			cin >> ch;
			if (ch == 'Y' || 'y')
				goto start;
			else
				goto end;
				break;
		}
		case 2:
		{
			cout << "---SUBTRACTION---" << endl;
			subtraction();
			cout << "Do you want to go to menu?" << endl;
			cin >> ch;
			if (ch == 'Y' || 'y')
			{
				goto start;
			}
			else
				goto end;
			break;
		}
		case 3:
		{
			cout << "---MULTIPLICATION---" << endl;
			multiplication();
			cout << "Do you want to go to menu?" << endl;
			cin >> ch;
			if (ch == 'Y' || 'y')
			{
				goto start;
			}
			else
				goto end;
			break;
		}
		case 4:
		{
			cout << "---DIVISION---" << endl;
			division();
			cout << "Do you want to go to menu?" << endl;
			cin >> ch;
			if (ch == 'Y' || 'y')
			{
				goto start;
			}
			else
				goto end;
			break;
		}

		default:
		{
			char a;
			cout << "Wrong input\nDo you want to go back to menu?" << endl;
			cin >> a;
			if (a == 'Y' || 'y')
			{
				goto start;

			}
			else
			{
				goto end;
			}
			break;
		}
		}
	end:
	cout << "You are exiting the program..." << endl;
	system("pause");
	return 0;
}
 