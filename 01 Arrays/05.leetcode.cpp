// sort colors (0's , 1's and 2's) leetcode https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
    int start = 0;
    int end = nums.size() - 1;
    int i = 0;
    while (i <= end)
    {
        if (nums[i] == 0)
        {
            swap(nums[i], nums[start]);
            i++;
            start++;
        }
        else if (nums[i] == 2)
        {
            swap(nums[i], nums[end]);
            end--;
        }
        else
        {
            i++;
        }
    }
    }
    // other methods 1) sort function , 2) counting no.'s of 0,1,2 and then printing them 3).using 2 pointer method
};

//  -----------------------------------------------for dry run help-----------------------------------------------------//

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         nums.push_back(a);
//     }
//     int start = 0;
//     int end = nums.size() - 1;
//     int i = 0;
//     while (i <= end)
//     {
//         if (nums[i] == 0)
//         {
//             swap(nums[i], nums[start]);
//             i++;
//             start++;
//         }
//         else if (nums[i] == 2)
//         {
//             swap(nums[i], nums[end]);
//             end--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }
//     return 0;
// }
