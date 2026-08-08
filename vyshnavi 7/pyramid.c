#include <stdio.h>

void printPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows <= 0)
    {
        printf("Please enter a positive number of rows.\n");
        return 1;
    }

    printf("Pyramid Pattern:\n");
    printPyramid(rows);

    return 0;
}#include <stdio.h>

void printPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows <= 0)
    {
        printf("Please enter a positive number of rows.\n");
        return 1;
    }

    printf("Pyramid Pattern:\n");
    printPyramid(rows);

    return 0;
}