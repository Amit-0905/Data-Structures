// binary search in a nearly sorted array
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        if (mid-1>=0 && target == arr[mid - 1])
        {
            return mid - 1;
        }
        if (mid+1<arr.size() && target == mid + 1)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
    }
    return 0;
}

int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int ans = binarySearch(arr, target);
    if (ans)
    {
        cout << target << " found at index : " << ans << endl;
    }
    else
    {
        cout << "Element not Found..." << endl;
    }
    return 0;
}
