#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int birthday(int s_count, int* s, int d, int m) 
{
    int result=0;
    int sumForDay=0;

    for (int i = 0; s_count-i>=m; i++)
    {
        sumForDay=0;

        for (int j = i; j < m+i; j++) sumForDay+=s[j];

        if(sumForDay==d)    result++;
    }

    return result;
}


int main(){

    

    system("PAUSE");

    return 0;

}