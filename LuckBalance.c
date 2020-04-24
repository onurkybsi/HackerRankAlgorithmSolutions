#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int luckBalance(int k, int contests_rows, int contests_columns, int **contests)
{

    int i = 0;
    int tmp;
    int tmp2;

    for (i = 0; i < contests_rows; i++)
    {
        int sirali = 1;

        for (int j = contests_rows - 1; j > i; j--)
        {
            if (contests[j - 1][0] > contests[j][0])
            {
                sirali = 0;
                tmp = contests[j - 1][0];
                tmp2 = contests[j - 1][1];
                contests[j - 1][0] = contests[j][0];
                contests[j - 1][1] = contests[j][1];
                contests[j][0] = tmp;
                contests[j][1] = tmp2;
            }
        }

        if (sirali) break;
    }

    i = contests_rows - 1;
    tmp = 0;
    tmp2 = k;

    while (i >= 0)
    {
        if(contests[i][1] == 0 || tmp2 > 0)
        {
            tmp += contests[i][0];
            
            if (contests[i][1] == 1) 
            {
                tmp2--;
            }
        }
        else
        {
            tmp -= contests[i][0];
        }

        i--;
    }
    

    return tmp;
}

int main()
{

    system("PAUSE");

    return 0;
}