#include <iostream>
using namespace std;

// Function template declaration
template <class t>
void sum(t num1, t num2)
{
    cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
}
int main()
{
    sum(2, 1); // calling the sum function
    sum(2.3, 4.3);

    return 0;
}