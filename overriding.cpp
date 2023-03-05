#include <iostream>
using namespace std;
class room1
{
public:
    void shubham()
    {
        cout << "shubham is good in singing" << endl;
    }
};

class room2 : public room1
{
public:
    void shubham()
    {
        room1::shubham(); // trick-1
        // By using derived class ,we can also access overriden method from base class
        cout << "Shubham is  good in dancing" << endl;
    }
};

int main()
{
    room2 r;
    r.shubham(); // It can access only room2's shubham

    // r.room1::shubham(); //trick-2
    // In the above code shubham() of room1 is overridden by room2's shubham().
    // That's why we are using base class name with scope resolution operator.

    return 0;
}
