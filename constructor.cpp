#include <iostream>
using namespace std;

class worker
{
    string name;
    int id;
    int age;

public:
    void setdata();
    void displaydata();
    /*
    some characteristics of constructor
    1.we can declare constructor without return type
    2.constructor have same name as class
    3.constructor can have parameter or not
    4.we can use constructor without calling them in main function 
    */
    worker(); // constructor
};
void worker ::setdata()
{
    cout << "Enter the details of the worker\n\n";
    cout << "Enter the name of the worker : ";
    cin >> name;
    cout << "Enter the age of the worker : ";
    cin >> age;
}
// constructor definition outside the class
worker ::worker()
{
    id = 231; // assign value of id
}
void worker ::displaydata()
{
    cout << "\n\nThe details of the worker are below\n";
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
    cout << "ID : " << id << endl;
}
int main()
{
    worker w;
    w.setdata();
    w.displaydata();

    return 0;
}