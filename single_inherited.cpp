#include <iostream>

using namespace std;
class father
{
    string name;

public:
    void setName()
    {
        cout << "Enter father name: ";
        cin >> name;
    }
    void getName()
    {
        cout << endl
             << "Your father name is " << name << endl;
    }
    string namef()
    {
        return name;
    }
};
class child : public father
{
    string fName;
    string lName;

public:
    void setChildName()
    {
        cout << "\nEnter your first name : ";
        cin >> fName;
        cout << "Enter your last name : ";
        cin >> lName;
    }
    void getChildFullName()
    {
        cout << "Your full name is " << fName << " " << namef() << " " << lName << endl;
    }
};

int main()
{
    child c;
    c.setName();
    c.getName();
    c.setChildName();
    c.getChildFullName();
    return 0;
}
