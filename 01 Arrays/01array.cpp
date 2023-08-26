#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // ----------array declaration-------------
    // int arr[10];
    // cout << "array created of 10 int continuous memory block where arr is storing the base addres i.e 1st location address \n"
    //      << endl;
    // cout << "ways to view address : " << arr << " or using & : " << &arr << endl;

    // ----------array intialization ----------------
    int arr[] = {2, 4, 6, 8, 10, 12};
    int brr[5] = {1, 2, 3, 4, 5};
    int crr[10] = {1, 2, 3, 4, 5}; // rest value will be 0
    // int drr[3] = {1, 2, 3, 4, 5}; // error 'excess elements in array initializer'
    char err[10] = {'a', 'b', 'c'};
    // cout << err[5];
    cout << crr[6] << endl; // gives 0

    // -==---=++++------------memset function yad karlena-----------------
    int new_arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    memset(new_arr, 0, sizeof(new_arr));
    for (int i = 0; i < 10; i++)
    {
        cout << new_arr[i] << " ";
    }
    return 0;
}
