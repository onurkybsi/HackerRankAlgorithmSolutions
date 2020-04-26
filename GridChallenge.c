#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *gridChallenge(int grid_count, char **grid)
{
    char temp;

    for (int i = 0; i < grid_count; i++)
    {
        for(int j = 0; j < grid_count - 1; j++)
        {
            for(int k = 0; k < grid_count - 1; k++)
            {
                if (grid[i][k] > grid[i][k + 1])
                {
                    temp = grid[i][k];
                    grid[i][k] = grid[i][k + 1];
                    grid[i][k + 1] = temp;
                }
            }
            printf("%c", grid[i][grid_count - 1 - j]);

            if (grid[i][grid_count - 1 - j] > grid[i + 1][grid_count - 1 - j])
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

    char grid[3][3] = {{'m', 'p', 'x'}, {'a', 'b', 'c'}, {'w', 'l', 'm'}};

    for (int i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                if (grid[i][k] > grid[i][k + 1])
                {
                    temp = grid[i][k];
                    grid[i][k] = grid[i][k + 1];
                    grid[i][k + 1] = temp;
                }
            }

            printf("%c", grid[i][2 - j]);
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