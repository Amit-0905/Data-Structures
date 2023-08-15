#include <iostream>
using namespace std;

int main()
{
    // ------------------------------- Hollow Diamond ------------------------------
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     // spaces
    //     for (int i = 0; i < n - row - 1; i++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (int i = 0; i < 2 * row + 1; i++)
    //     {
    //         if (i == 0 || i == 2 * row)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // // lower part
    // for (int row = 0; row < n; row++)
    // {
    //     // spaces
    //     for (int i = 0; i < row; i++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (int i = 0; i < 2 * n - 2 * row - 1; i++)
    //     {
    //         if (i == 0 || i == (2 * n) - (2 * row) - 2)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // --------------------------------Flipped Solid Diamond ---------------------
    // int n;
    // cin >> n;
    // // upper part
    // for (int row = 0; row < n; row++)
    // {
    //     // half pyramid
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     // full space pyramid
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     // half pyramid
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // lower part
    // for (int row = 0; row < n; row++)
    // {
    //     // half pyramid
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     // empty space pyramid
    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     // half pyramid
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // --------------------------------numeric pattern ---------------------------
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     int col;
    //     for (col = 0; col < row + 1; col++)
    //     {
    //         cout << col + 1;
    //     }
    //     col = col - 1;
    //     for (; col >= 1; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    // ----------------------------Alphabet Palidrome -------------------------------
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     int col;
    //     for (col = 0; col < row + 1; col++)
    //     {
    //         int ans = col + 1;
    //         char ch = ans + 'A' - 1;
    //         cout << ch;
    //     }
    //     col = col - 1;
    //     for (; col >= 1; col--)
    //     {
    //         int ans = col;
    //         char ch = ans + 'A' - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }
    return 0;
}
