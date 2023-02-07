// Find the number from element whose sum is 5 , elements of the array can be repeated

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[3] = {1, 3, 2};
//     int num = 5, i = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr1[i] + arr1[j] == num)
//             {
//                 cout << "Match Found!";
//                 return 0;
//             }
//         }
//     }

//     return 0;
// }

//--------------------------------------------------------------------------------------

// check difference between elements is same or not
// example : {1,2,3,4}
// 2-1=1  3-2=1  4-3=1 ,Hence array has same difference between elements

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of the array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int s1, s2, c = 0;

//     for (int i = 0; i < n; i++)
//     {

//         s1 = arr[i + 1] - arr[i];
//         s2 = arr[i + 2] - arr[i + 1];

//         if (s1 == s2)
//         {
//             c++;
//         }
//     }

//     if (c == (n - 2))
//     {
//         cout << "Same difference ";
//     }
//     else
//     {
//         cout << "Not same difference";
//     }

//     return 0;
// }

//--------------------------------------------------------------------------------------------------

// swapping alternate numbers of the array

// #include <iostream>
// using namespace std;

// int swap_alternate(int arr[], int n)
// {
//     for (int i = 0; i < n; i += 2)
//     {
//         if (i + 1 < n)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }

// int print_array(int arr[], int n)
// {
//     cout << "Printing swapping of elements of array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of the array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     swap_alternate(arr, n);
//     print_array(arr, n);

//     return 0;
// }

//-------------------------------------------------------------------------------------------

// Linear search of arrays element

// #include <iostream>
// using namespace std;

// void linear_search(int arr[], int n, int num)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == num)
//         {
//             cout << i;
//         }
//     }
//     cout << "Match Not Found";
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of the array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int num;
//     cout << "Enter the number : ";
//     cin >> num;

//     linear_search(arr, n, num);
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------

// Binary search of arrays elements

// #include <iostream>
// using namespace std;

// void binary_search(int arr[], int n, int num)
// {
//     int s = 0, e = n;

//     for (int i = 0; i < n; i++)
//     {
//         int mid = (s + e) / 2;
//         if (arr[mid] == num)
//         {
//             cout << mid;
//             break;
//         }
//         else if (arr[mid] > num)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of the array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int num;
//     cout << "Enter the number : ";
//     cin >> num;

//     binary_search(arr, n, num);

//     return 0;
// }

//--------------------------------------------------------------------------------------------------

// sorting of elements of the array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of the array : ";
//     cin >> n;
//     int arr[n];

//     cout << "Enter the elements of the array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 1 + i; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 swap(arr[j], arr[i]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
