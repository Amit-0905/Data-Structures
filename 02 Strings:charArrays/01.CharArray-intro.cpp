// " \o " is null charater with ascii value 0 which is
//  automatically added at end and acts as terminator

#include <iostream>
using namespace std;

int main()
{
    char name[100];
    cout << "Enter your name : ";
    cin >> name;
    cout << "Hello " << name << endl;

    return 0;
}