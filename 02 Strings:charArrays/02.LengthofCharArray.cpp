#include <iostream>
using namespace std;

int length(char input[])
{
    int count = 0, i = 0;
    while (input[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int main()
{
    char name[100];
    cout << "Enter your name : ";
    cin >> name;

    cout << "Length of entered name = " << length(name) << endl;
    return 0;
}