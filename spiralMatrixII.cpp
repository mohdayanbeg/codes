#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = n - 1;
    int num = 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // Traverse right
        for (int i = col_start; i <= col_end; i++)
        {
            matrix[row_start][i] = num;
            num++;
        }
        row_start++;

        // Traverse down
        for (int i = row_start; i <= row_end; i++)
        {
            matrix[i][col_end] = num;
            num++;
        }
        col_end--;

        // Traverse left
        for (int i = col_end; i >= col_start; i--)
        {
            matrix[row_end][i] = num;
            num++;
        }
        row_end--;

        // Traverse up
        for (int i = row_end; i >= row_start; i--)
        {
            matrix[i][col_start] = num;
            num++;
        }
        col_start++;
    }

    // Print the matrix
    cout << "The matrix in spiral order is:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
