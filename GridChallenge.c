#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *gridChallenge(int grid_count, char **grid)
{
    char temp;
    int countOfColumn = strlen(grid[0]);

    for (int i = 0; i < grid_count; i++)
    {
        for(int j = 0; j < countOfColumn - 1; j++)
        {
            for(int k = 0; k < countOfColumn - 1 - j; k++)
            {
                if (grid[i][k] > grid[i][k + 1])
                {
                    temp = grid[i][k];
                    grid[i][k] = grid[i][k + 1];
                    grid[i][k + 1] = temp;
                }
            }

            if ((i + 1 != grid_count - 1) && (grid[i][countOfColumn - 1 - j] > grid[i + 1][countOfColumn - 1 - j]))
                return "NO";
        }
    }

    return "YES";
}

int main()
{
    int j = 0;
    int k = 0;
    char temp;

    char grid[3][3] = {{'m', 'x', 'p'}, {'b', 'c', 'a'}, {'w', 'm', 'l'}};

    for (int i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2 - j; k++)
            {
                if (grid[i][k] > grid[i][k + 1])
                {
                    temp = grid[i][k];
                    grid[i][k] = grid[i][k + 1];
                    grid[i][k + 1] = temp;
                }
            }

            printf("%c\n", grid[i][2 - j]);
        }
    }

    printf("\n");


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c", grid[i][j]);
        }

        printf("\n");
    }

    printf("%c", grid[0][4]);

    system("PAUSE");

    return 0;
}