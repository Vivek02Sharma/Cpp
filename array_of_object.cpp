#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    char div;

public:
    void setdata(int i);
    void dispalydata(int i);
};
void student ::setdata(int i)
{
    cout << "\n\nEnter the information of " << i + 1 << " student \n";
    cout << "Enter the name : ";
    cin >> name;
    cout << "Enter the age : ";
    cin >> age;
    cout << "Enter the div : ";
    cin >> div;
}

void student ::dispalydata(int i)
{
    cout << "\nThe details of " << i + 1 << " student \n";
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "Division : " << div << endl;
}
int main()
{
    // array of object
    student s[3];

    // set data using for loop
    for (int i = 0; i < 3; i++)
    {
        s[i].setdata(i);
    }

    cout << "\n\nBelow is the details of following student\n\n";
    // displaying data using for loop
    for (int i = 0; i < 3; i++)
    {
        s[i].dispalydata(i);
    }

    return 0;
}