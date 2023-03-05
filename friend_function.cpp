#include <iostream>
using namespace std;
class person
{
    string vh;

public:
    friend void frnd(person);
};

void frnd(person p)
{
    p.vh = "car";
    cout << "I bought " << p.vh << " from my friend";
}

int main()
{
    person p;
    frnd(p);
    return 0;
}