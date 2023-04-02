#include <iostream>
using namespace std;

bool mystrcmp(char a[], char b[])
{
    if (strlen(a) != strlen(b))
        return false;

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    char array1[100];
    cin.getline(array1, 100);
    char array2[100];
    cin.getline(array2, 100);
    if (mystrcmp(array1, array2))
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
        ;
    }
    return 0;
}