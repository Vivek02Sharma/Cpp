// friend function

#include <iostream>
using namespace std;
class person
{
    string vh;

public:
    friend void frnd(person); // declaration of the friend function
};

void frnd(person p) // definitions of the friend function
{
    p.vh = "car";
    cout << "I bought " << p.vh << " from my friend";
}

int main()
{
    person p;
    frnd(p); // calling friend function like normal function
    return 0;
}

//-----------------------------------------------------------------------------------------------------------

// using friend function for one or more class

// #include <iostream>
// using namespace std;
// class vivek; // pre-declaration of class
// class akhilesh
// {
//     string name;

// public:
//     void setdata(string name)
//     {
//         this->name = name;
//     }
//     friend void team(akhilesh, vivek); // declaration of friend function with class name as parameter
// };

// class vivek
// {
//     string name;

// public:
//     void setdata(string name)
//     {
//         this->name = name;
//     }
//     friend void team(akhilesh, vivek); // declaration of friend function with class name as parameter
// };

// void team(akhilesh a, vivek v)
// {
//     cout << a.name << " and " << v.name << " are in same team" << endl;
// }

// int main()
// {
//     akhilesh a;
//     a.setdata("akhilesh");

//     vivek v;
//     v.setdata("vivek");

//     team(a, v); // calling friend function like normal function

//     return 0;
// }
