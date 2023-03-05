#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "a=" << a << "\tb=" << b << endl;
    }
    complex operator+(complex c) // defining operator overloading
    {
        complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getdata(2, 4);
    c2.getdata(6, 8);
    c3 = c1 + c2; // operator overload
    c3.showdata();
    return 0;
}