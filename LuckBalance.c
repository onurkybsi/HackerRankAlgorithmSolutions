#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int luckBalance(int k, int contests_rows, int contests_columns, int **contests)
{

    int result = 0;
    int temp;
    int j = 0;

    for (int i = 0; i < contests_rows; i++)
    {
        if (contests[i][1] == 1)
            result -= contests[i][0];
        else
            result += contests[i][0];
    }

    while (k > 0)
    {
        for (j = 0; j < contests_rows - 1; j++)
        {

            if (contests[j][1] == 0)
                continue;

            if (contests[j] > contests[j + 1])
            {

                temp = contests[j];
                contests[j] = contests[j + 1];
                contests[j + 1] = temp;
            }
        }

        result += contests[j + 1][0] * 2;
        k--;
    }

    return result;
}

int main()
{

    system("PAUSE");

    return 0;
}