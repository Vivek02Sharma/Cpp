#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    void setvalue(int num1, int num2)
    {
        real = num1;
        img = num2;
    }

    void complex_setvalue(complex c1, complex c2) // receiving object as parameter
    {
        real = c1.real + c2.real;
        // real = c1.real + c2.real;
        //  8   =    2    +    6

        img = c1.img + c2.img;
        // img = c1.imag + c2.imag
        //  12 =    4    +    8
    }

    void display()
    {
        cout << real << " + " << img << "i " << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setvalue(2, 4);
    c1.display();

    c2.setvalue(6, 8);
    c2.display();

    cout << "------------" << endl;
    c3.complex_setvalue(c1, c2); // passing object as parameter
    c3.display();

    return 0;
}