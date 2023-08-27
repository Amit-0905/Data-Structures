#include <iostream>
#include <vector>
using namespace std;

void wavePrintMax(vector<vector<int>> v)
{
    int m = v.size(); // rowsize
    int n = v[0].size();
    for (int i = 0; i < n; i++)
    {
        if ((i & 1) == 0)
        { // even
            for (int j = 0; j < m; j++)
            {
                cout << v[j][i] << " ";
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << v[j][i] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    wavePrintMax(v);
    return 0;
}
