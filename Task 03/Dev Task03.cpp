#include <iostream>
#include <stdio.h>

using namespace std;

class Calculator
{
private:
    int a, b;

public:
    Calculator()
    {
        cout << "Welcome to calculator"<<endl;
    }

    int multiply(int a, int b);
    int divide(int a, int b);

    int sum(int a, int b)
    {
        int sum = a + b;
        cout << "Result of Sum is " << sum << endl;
        return 0;
    }

    int subtract(int a, int b)
    {
        int subtract = a - b;
        cout << "Result of Subtraction is " << subtract << endl;
        return 0;
    }
};

int Calculator :: multiply(int a, int b)
{
    int mul = a * b;
    cout << "Result of Multiply is " << mul << endl;
    return 0;
}

int Calculator::divide(int a, int b)
{
    int div = a / b;
    cout << "Result of Division is " << div << endl;
    return 0;
}

int main()
{
    Calculator C;
    int x, y;
    cout << "Enter number 1: " << endl;
    cin >> x;
    cout << "Enter number 2: " << endl;
    cin >> y;
    C.sum(x, y);
    C.subtract(x, y);
    C.multiply(x, y);
    C.divide(x, y);
    system("pause");
    return 0;
}


