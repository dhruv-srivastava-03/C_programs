#include <stdio.h>

int main()
{

    int arr[100][100], i, j, temp, flag, k, l, row, column, Column;

    printf("Enter the no of rows: ");
    scanf("%d", &row);
    printf("Enter the no of column: ");
    scanf("%d", &column);
    temp = 0;
    flag = 0;
    Column = column;
    while (Column != 0)
    {
        /* code */

        // input the matrix
        for (i = 1; i <= row; i++)
        {
            for (j = 1; j <= column; j++)
            {
                printf("Enter the value of a%d%d: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        // Displaying the first row
        for (i = 1; i <= (column - temp); i++)
        {
            if (arr[1][i] != 0)
            {
                printf("%d,", arr[1 + flag][i]);
            }
        }

        // displaying the last column

        for (i = 2; i <= (row - temp); i++)
        {

            printf("%d,", arr[i][column - flag]);
        }

        // displaying last row backwards

        for (i = (column - 1) - temp; i >= 1; i--)
        {
            if (arr[row][i] != 0)
            {
                printf("%d,", arr[row - flag][i]);
            }
        }

        // displaying the first column

        for (i = (row - 1) - temp; i >= 2; i--)
        {
            if (arr[i][1] != 0)
            {
                printf("%d,", arr[i + flag][1]);
            }
        }

        temp = 2;
        ++flag;
        Column = Column - 2;
    }

    return 0;

    getchar();
}