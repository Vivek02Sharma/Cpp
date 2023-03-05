// #include <iostream>
// using namespace std;

// int main()
// {
//     int age;
//     cout << "Enter your age : ";
//     cin >> age;

//     try
//     {
//         if (age >= 18)
//         {
//             cout << "Your age is enough to drive a car" << endl;
//         }
//         else
//         {
//             throw(age);
//         }
//     }
//     catch (int age)
//     {
//         cout << "Your age is not enough to drive a car" << endl;
//     }
//     return 0;
// }

//-----------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;

    try
    {
        if (!b == 0)
        {
            int c = a / b;
            cout << "The division is " << c;
        }
        else
        {
            throw string("Divisible by zero is not possible");
        }
    }
    catch (string exc)
    {
        cout << exc << endl;
        cout << "Error : 404";
    }

    return 0;
}