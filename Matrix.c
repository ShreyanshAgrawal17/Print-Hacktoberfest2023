#include <stdio.h>
void creatematrix(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}
void display(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        printf("\n");
        for (j = 1; j <= c; j++)
        {
            printf("%d ", A[i][j]);
        }
    }
}

void calculateRowSums(int r, int c, int A[][c], int rowSums[])
{
    for (int i = 1; i <= r; i++)
    {
        rowSums[i] = 0;
        for (int j = 1; j <=c; j++)
        {
            rowSums[i] += A[i][j];
        }
    }
}

void calculateColumnSums(int r, int c, int A[][c], int columnSums[])
{
    for (int j = 1; j <= c; j++)
    {
        columnSums[j] = 0;
        for (int i = 1; i <= r; i++)
        {
            columnSums[j] += A[i][j];
        }
    }
}

void displayRowSums(int r, int rowSums[])
{
    printf("Sum of each row:\n");
    for (int i = 1; i <= r; i++)
    {
        printf("Row %d: %d\n", i , rowSums[i]);
    }
}

void displayColumnSums(int c, int columnSums[])
{
    printf("Sum of each column:\n");
    for (int j = 1; j <= c; j++)
    {
        printf("Column %d: %d\n", j , columnSums[j]);
    }
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int A[r][c];
    creatematrix(r, c, A);
    display(r, c, A);
    int rowSums[r];
    calculateRowSums(r, c, A, rowSums);
    displayRowSums(r, rowSums);
    int columnSums[c];
    calculateColumnSums(r, c, A, columnSums);
    displayColumnSums(c, columnSums);

    return 0;
}
