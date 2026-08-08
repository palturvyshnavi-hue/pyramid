#include <stdio.h>

int starsInRow(int row)
{
    return (2 * row) - 1;
}

int main()
{
    int expected[] = {1, 3, 5, 7, 9};
    int rows = 5;
    int passed = 0;

    printf("Pyramid Testbench\n");
    printf("-----------------\n");

    for (int i = 1; i <= rows; i++)
    {
        int result = starsInRow(i);

        printf("Row %d | Expected Stars: %d | Result: %d | ",
               i, expected[i - 1], result);

        if (result == expected[i - 1])
        {
            printf("PASS\n");
            passed++;
        }
        else
        {
            printf("FAIL\n");
        }
    }

    printf("-----------------\n");
    printf("Tests Passed: %d/%d\n", passed, rows);

    if (passed == rows)
    {
        printf("All tests passed successfully!\n");
    }
    else
    {
        printf("Some tests failed.\n");
    }

    return 0;
}