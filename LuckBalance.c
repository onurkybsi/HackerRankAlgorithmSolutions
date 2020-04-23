#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int luckBalance(int k, int contests_rows, int contests_columns, int **contests)
{

    int result = 0;
    int i = 0;
    int tmp;

    for (i = 0; i < contests_rows; i++)
    {
        int sirali = 1;

        for (int j = contests_rows - 1; j > i; j--)
        {
            if (contests[j - 1][0] > contests[j][0])
            {
                sirali = 0;
                tmp = contests[j - 1][0];
                contests[j - 1][0] = contests[j][0];
                contests[j][0] = tmp;
            }
        }

        if (sirali) break;
    }

    i = contests_rows - 1;
    tmp = k;

    while (i >= 0)
    {
        if(contests[i][1] == 0)
            result += contests[i][0];
        else if(tmp > 0)
        {
            result += contests[i][0];
            tmp--;
        }
        else
        {
            result -= contests[i][0];
        }
        
        i--;
    }
    

    return result;
}

int main()
{

    system("PAUSE");

    return 0;
}