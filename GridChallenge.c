#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char *gridChallenge(int grid_count, char **grid)
{

    char temp;
    int j = 0;
    int k = 0;

    for (int i = 0; i < grid_count; i++)
    {
        j = 0;

        while(grid[i][j + 1] != '\0')
        {   
            int sorted = 1;
            k = 0;

            while(grid[i][k + 1] != '\0')
            {

                if (grid[i][k] > grid[i][k + 1])
                {
                    sorted = 0;
                    temp = grid[i][k];
                    grid[i][k] = grid[i][k + 1];
                    grid[i][k + 1] = temp;
                }

                k++;
            }

            if(grid[i][k - j] < grid[i + 1][k - j])
                return "NO";

            if(sorted)
                break;
            
            j++;
        }
    }

    return "YES";
}

int main()
{

    system("PAUSE");

    return 0;
}