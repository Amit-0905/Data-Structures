#include <iostream>
using namespace std;

int main()
{
    // --------------------------- Solid Square----------------------------
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // ----------------------------Hollow square------------------------------
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // --------------------------Hollow inverted Half-Pyramid---------------------
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 || j == 0 || j == n - i - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // -------------------------- Full Pyramid----------------------------
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     int k = 0;
    //     for (int col = 0; col < (2 * n) - 1; col++)
    //     {
    //         if (col < n - row - 1)
    //         {
    //             cout << "  ";
    //         }
    //         else if (k < (2 * row) + 1)
    //         {
    //             cout << "* ";
    //             k += 1;
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // ---------------------------------Hollow Full Pyramid---------------------------------------
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < (2 * n) - 1; col++)
    //     {
    //         if (col < n - row - 1)
    //         {
    //             cout << "  ";
    //         }
    //         else if (col == n - row - 1 || col == n + row - 1 || row == n - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    return 0;
}
