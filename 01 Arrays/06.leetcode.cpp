// Move all -ve no. to the left side
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    // solution 1 using sort
    // sort(arr.begin(), arr.end());

    // solution 2 using dutch national flag algo (2 pointers approach)
    int start, i;
    start = i = 0;
    int end = arr.size() - 1;
    while (i <= end)
    {
        if (arr[i] >= 0)
        {
            swap(arr[i], arr[end]);
            end--;
        }
        else
        {
            i++;
            start++;
        }
    }
    // output
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
