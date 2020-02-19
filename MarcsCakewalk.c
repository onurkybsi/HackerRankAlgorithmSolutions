#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long marcsCakewalk(int calorie_count, int* calorie) {

    int i = 0, j = 0, temp = 0;
    long result = 0;

    for(i = 0; i < calorie_count-1; i++)
    {
        for(j = 0; j < calorie_count-1; j++)
        {

            if(calorie[j]>calorie[j+1])
            {
                temp=calorie[j];
                calorie[j]=calorie[j+1];
                calorie[j+1]=temp;
            }
        }
    }

    for (i = 0; i < calorie_count; i++)
        result += (long)((pow(2.0,(double)i))*(double)calorie[calorie_count-1-i]);
    
    
    return result;
}

int main(){

    system("PAUSE");

    return 0;

}