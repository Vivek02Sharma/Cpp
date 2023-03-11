#include <iostream>
using namespace std;
template <class x>
class calculation
{
    x num1, num2;
    char op;

public:
    void calculate()
    {
        cout << "Enter the first number : ";
        cin >> num1;
        cout << "Enter the second number : ";
        cin >> num2;
        cout << "Enter the operator : ";
        cin >> op;

        if (op == '+')
            cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
        else if (op == '-')
            cout << "The subtract of " << num1 << " and " << num2 << " is " << num1 - num2;
        else if (op == '*')
            cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2;
        else if (op == '/')
            cout << "The division of " << num1 << " and " << num2 << " is " << num1 / num2;
        else
            cout << "Entered invalid number or operator ";
    }
};
int main()
{
    calculation<int> cal;
    cal.calculate();

    cout << endl
         << endl;

    calculation<float> cal1;
    cal1.calculate();

    return 0;
}