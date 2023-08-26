#include <iostream>
using namespace std;

void printarrsum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

void printarr(int arr[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(int arr[][3], int r, int c, int transposearr[][3])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transposearr[j][i] = arr[i][j];
        }
    }
}

int main()
{
    //  -----------------------------2d arrays------------------------------

    // // declaration
    // int arr[3][3];

    // // ----------------intialization /////////---
    // int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // // rowwise access
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // column wise access
    // cout << "Col wise acess :" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << brr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // colwise input
    // int arr[3][3];
    // int row = 3;
    // int col = 3;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }
    // cout << "Output : " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout << arr[i][j] << " "; // no swap of i and j as already swapped while taking input
    //     }
    //     cout << endl;
    // }

    //  -------------------------- colwise sum------------------------
    // int arr[3][3];
    // int row = 3;
    // int col = 3;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // // printarrsum(arr, row, col);

    // ------------------- transpose the array-------------------------
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    int transposearr[3][3];
    cout << "Array befor :" << endl;
    printarr(arr, row, col);
    transpose(arr, row, col, transposearr);
    cout << "Array after transposing : " << endl;
    printarr(transposearr, row, col);
    return 0;
}
