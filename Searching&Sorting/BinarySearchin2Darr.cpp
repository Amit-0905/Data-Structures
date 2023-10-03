// binary search on a 2d arr (or vector) can be applied by knowing cols,rows count.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int cols, int rows, int target)
{
    int start = 0;
    int end = rows * cols - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int a = mid / cols;
        int b = mid % cols;
        if (arr[a][b] == target)
        {
            return true;
        }
        else if (arr[a][b] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int rows = 5;
    int cols = 4;
    int target = 17;
    bool ans = binarySearch(arr, cols, rows, target);
    if (ans)
        cout << "Found....." << endl;
    else
        cout << "Not Found....." << endl;
    return 0;
}
