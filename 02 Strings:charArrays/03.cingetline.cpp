// in char array of length 4 i.e char array[4] we can only stor
//  only 3 elements i.e we can not store abcd in it because last element must be \0

// cin.getline(string_name,length,delimiter)  --> delimiter is by default \n .

#include <iostream>
using namespace std;

int main()
{
    char array[100];
    cin.getline(array, 100);
    cout << array << endl;
    
    char arr[10];
    cin.getline(arr, 4); // max elements could be 3 only last must be \0
    cout << arr << endl;

    // char a[30];
    // cout << "Enter Greeting : ";
    // cin.getline(a, 30, 'm'); // delimiter is set to m
    // cout << a << endl;
    return 0;
}