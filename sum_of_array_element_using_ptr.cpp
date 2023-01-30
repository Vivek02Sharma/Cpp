#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int array[size];
    cout << "Enter the elements of the array : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    int *ptr = array;
    for (int i = 0; i < size; i++)
    {
        sum += ptr[i];
    }

    cout << "The sum of the elements of the array is " << sum << endl;

    return 0;
}