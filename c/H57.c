#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter the number of rows in matrix 'A'- ");
    scanf("%d", &m);
    printf("Enter the number of columns in matrix 'A'- ");
    scanf("%d", &n);
    printf("Enter the number of rows in matrix 'B'- ");
    scanf("%d", &p);
    printf("Enter the number of columns in matrix 'B'- ");
    scanf("%d", &q);

    if (n == p)
    {
        int a[m][n];
        printf("\nEnter the data for matrix 'A'-\n\n");
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("Enter the value at %d,%d position- ", i, j);
                scanf("%d", &a[i][j]);
            }
        }

        int b[p][q];
        printf("\nEnter the data for matrix 'B'-\n\n");
        for (int i = 1; i <= p; i++)
        {
            for (int j = 1; j <= q; j++)
            {
                printf("Enter the value at %d,%d position- ", i, j);
                scanf("%d", &b[i][j]);
            }
        }

        int ab[m][q];

        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=q; j++)
            {
            ab[i][j]=0;
                for(int k=1; k<=n; k++)
                {
                    ab[i][j]+=(a[i][k]*b[k][j]);
                }
            }
        }

        printf("Matrix Multiplication of 'AB' is-\n\n");

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= q; j++)
            {
                printf("Value at %d, %d is %d\n", i, j, ab[i][j]);
            }
        }
    }

    else
    {
        printf("\nThe number of columns in matrix 'A' and number of rows in matrix 'B' are not same.\nHence the multiplication of matrix 'A' and matrix 'B' is not possible. :(");
    }

    return 0;
}