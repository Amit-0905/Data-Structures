// This is the 3rd case of binary search 1) casual one 2). when our ans is within a range like sqrt 3). in this we find relation in index and use index for searchingand left and right shift

//  In Given arr basilly every element exist in pairs i.e even no. of times so find the only no. that is without pair i.e its occurence is odd times

// https://www.geeksforgeeks.org/find-the-element-that-odd-number-of-times-in-olog-n-time/

//  two ways to solve 1). use XOR (^) operation or use binary search 3rd case

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int odd_occ(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (mid % 2 == 0)
        {
            // even index
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid; // di not mid-1 because mid could also be ans
            }
        }
        else
        {
            // odd index
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return start;
}

int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int ans = odd_occ(arr);
    cout << "Index of odd occurence where it is not in pair : " << ans << endl;
    return 0;
}
