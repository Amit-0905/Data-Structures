#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ----------------vector intially has 0 size and later on doubles its size when filled up---------

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(12);
    arr.push_back(14);

    cout << "Size : " << arr.size() << endl;
    ;
    cout << "capacity : " << arr.capacity() << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    arr.pop_back();
    cout << "arr after popping : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    vector<int> brr(10, -1); // all elments are -1 and if not passed then all will be zero
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    // vector<int> crr{10, 20, 30, 40, 50}; //working in debug console
    // for (int i = 0; i < crr.size(); i++)
    // {
    //     cout << crr[i] << " ";
    // }

    cout << endl
         << "brr vector is emoty or not : " << brr.empty() << endl;

    return 0;
}
