// find the duplicate number https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int ans;
        vector<int> occurence(n,0);
        for(int i=0;i<nums.size();i++){
            occurence[nums[i]-1]++;
            if(occurence[nums[i]-1]>1){
                return nums[i];
            }
        }
        return -1;
    }
};
// using flag 
 // flag visited element
        // int ans=-1;
        // for(int i=0;i<nums.size();i++){
        //     int index=abs(nums[i]); // abs as we are marking nums as -ve
        //     // checking if visited already
        //     if(nums[index]<0){
        //         ans=index;
        //         break;
        //     }
        //     nums[index]*=-1;
        // }
        // return ans;

// other ways of solving 1)using sort function 2) using flag to mark visited element 3)creating another vector or array

// ------------------------------------for dry run help------------------------------------------------
// Find the duplicate number
// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// int main()
// {
//     // input
//     int n;
//     cin >> n;
//     vector<int> nums;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         nums.push_back(a);
//     }
//     int k = nums.size() - 1;
//     vector<int> occurence(k, 0);
//     int a;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         a = occurence[nums[i] - 1];
//         a++;
//         occurence[nums[i] - 1] = a;
//         if (a > 1)
//         {
//             cout << nums[i];
//         }
//     }

//     return 0;
// }
