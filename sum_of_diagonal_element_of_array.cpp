#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int array[size][size];
    cout << "Enter the elements of the array : \n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array[i][j];
        }
    }
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                sum += array[i][j];
            }
        }
    }

    cout << "sum of diagonal element of array is  " << sum << endl;

    return 0;
}