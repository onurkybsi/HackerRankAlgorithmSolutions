#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* breakingRecords(int scores_count, int* scores, int* result_count) 
{
    int maxScore=scores[0];
    int minScore=scores[0];
    int max=0;
    int min=0;

    for (int i = 0; i < scores_count; i++)
    {
        if(scores[i]>maxScore)
        {
            maxScore=scores[i];
            max++;
        }
        if(scores[i]<minScore)
        {
            minScore=scores[i];
            min++;
        }  
    }

    int* result=malloc(2*sizeof(int));

    result[0]=max;
    result[1]=min;

    *result_count=2;


    return result;
    
}


int main(){



    system("PAUSE");

    return 0;

}