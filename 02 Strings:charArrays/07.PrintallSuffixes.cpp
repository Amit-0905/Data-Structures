#include <iostream>
using namespace std;

void printallsuffix(char input[])
{
    int n = strlen(input) - 1;
    for (int i = n; i >= 0; i--)
    {
        int start = i;
        int end = n;
        while (start <= end)
        {
            cout << input[start];
            start++;
        }
        cout << endl;
    }
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    printallsuffix(input);
    return 0;
}