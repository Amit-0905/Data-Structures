#include <iostream>
using namespace std;

int main()
{
    char input[100];
    cin.getline(input, 100);

    for (int i = 0; i < strlen(input); i++)
    {
        int end = i;
        int start = 0;
        while (start <= end)
        {
            cout << input[start];
            start++;
        }
        cout << endl;
    }
    return 0;
}