#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<vector<int>> arr; // here there will be space between vector<vector<int> >

    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6};
    // vector<int> c{7, 8, 9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i = 0; i < arr.size(); i++)
    // { // row's no. = arr.size()
    //     for (int j = 0; j < arr[0].size(); j++)
    //     { // col's no. arr[0].size()
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // --- for diffren no. of cols in each row
    // vector<vector<int>> arr; // here there will be space between vector<vector<int> >

    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6, 4, 2, 1};
    // vector<int> c{7, 8};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for (int i = 0; i < arr.size(); i++)
    // { // row's no. = arr.size()
    //     for (int j = 0; j < arr[i].size(); j++)
    //     { // col's no. arr[i].size()
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // --- 2d vector intialization
    vector<vector<int>> arr(3, vector<int>(5, 1));
    for (int i = 0; i < arr.size(); i++)
    { // row's no. = arr.size()
        for (int j = 0; j < arr[i].size(); j++)
        { // col's no. arr[i].size()
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // accesing values
    cout << arr[1][3];
    return 0;
}
