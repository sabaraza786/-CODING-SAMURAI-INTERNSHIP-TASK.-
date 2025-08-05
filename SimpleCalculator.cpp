#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n1, n2;
    char operators;
    cout << "Enter the operator like (+ , - , * , / , %) to perform opeartion  " << endl;
    cin >> operators;
    cout << "Enter value of n1 and n2 to calculate value : " << endl;
    cin >> n1 >> n2;

    switch (operators)
    {
    case '+':
    {
        cout << " Addition of " << n1 << " " << "+ " << " " << n2 << " " << "= " << n1 + n2 << endl;
        break;
    }
    case '-':
    {
        cout << " Subtraction of " << n1 << " " << " - " << " " << n2 << " " << "= " << n1 - n2 << endl;
        break;
    }
    case '*':
    {
        cout << " Multiplication of " << n1 << " " << " * " << " " << n2 << " " << "= " << n1 * n2 << endl;
        break;
    }
    case '/':
    {
        if (n2 == 0)
        {
            cout << " Logical Error because you are dividing a number by 0 ";
        }
        else
        {
            cout << " Division of " << n1 << " " << " / " << " " << n2 << " " << "= " << n1 / n2 << endl;
        }
        break;
    }
    case '%':
    {
        if (n2 == 0)
        {
            cout << " Logical Error: Modulus  by zero is not alowed ";
        }
        else
        {
            cout << " Modulus of " << n1 << " " << " % " << " " << n2 << " " << "= " << fmod(n1, n2) << endl;
        }
        break;
    }
    default:
        cout << " You entered an Invalid Operator" << endl;
    }
    return 0;
}