#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int luckBalance(int k, int contests_rows, int contests_columns, int** contests) {

    int i = 0;
    int temp = -1;
    int check = 1;
    int result = 0;

    while (k > 0)
    {
        if(contests[i][1] == 1){

            check = 1;

            for(int j = 0; j < contests_rows; j++){

                if(contests[j][0] > contests[i][0] && j != temp){
                    check = 0;
                    break;
                }
            }

            if(check == 1 && k > 0){
                k--;
                result += contests[i][0];
                temp = i;
            }
            else
            {
                result -= contests[i][0];
            }
        }
        else
        {
            result += contests[i][0];
        }

        i = (i+1) % contests_rows;
    }

    return result;
}

int main(){


    system("PAUSE");

    return 0;

}