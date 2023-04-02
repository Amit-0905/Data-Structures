#include <iostream>
using namespace std;

int length(char word[])
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void rev(char word[])
{
    int start = 0;
    int end = length(word) - 1;
    while (start < end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }
    cout << "Reversed word : " << word << endl;
}

int main()
{
    char word[100];
    cin.getline(word, 100);
    rev(word);
    return 0;
}