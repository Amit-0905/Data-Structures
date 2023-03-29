#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the 1st number : ";
    cin >> num1;
    cout << "Enter the 2nd number : ";
    cin >> num2;

    // 1st method
    swap(num1, num2);

    // using temp variable

    // using XOR i.e a=a^b ; b=a^b; a =a^b

    cout << "1st num : " << num1 << " 2nd num : " << num2 << endl;
    return 0;
}