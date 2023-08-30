#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> v, int target)
{
    // binary search algorithm to find the index of a number in an vector/array.
    int start = 0;
    int end = v.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2; // can lead to inteager overflow so use  s+(e-s)/2
        if (v[mid] == target)
        {
            return mid + 1;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // ------------------------------Linear seaching---------------------------------
    // vector<int> v{1, 8, 2, 4, 9, 6};
    // int target=8;
    // // Linear search is a very simple algorithm. It starts at the beginning of an array and compares each element with the value to be searched for
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == target)
    //     {
    //         cout << "Found " << target << endl;
    //         break;
    //     }
    // }
    // return 0;

    // --------------------------binary search--------------------------------------------
    // binary search needs monotonic sorted arrays
    vector<int> v{1, 4, 6, 7, 9, 10, 12, 35};
    int target = 1;
    int found = binary_search(v, target);
    cout << "found at " << found << endl;
    return 0;
}
