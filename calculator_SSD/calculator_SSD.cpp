#include <iostream>
#include "LogicCalculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    LogicCalculator c;
    while (true)
    {
        cin >> x >> oper >> y;

        if (oper == '/' && y == 0)
        {
            cout << "Attempted to divide by zero!" << endl;
            continue;
        }
        if (oper != '+' && '-'&&'/'&&'*')
        {
            cout << "Error. Unknown operator!" << endl;
            continue;
        }
        else
        {
            result = c.Calculator(x, oper, y);
        }
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
    }

    return 0;
}
