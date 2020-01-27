#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* acmTeam(int topic_count, char** topic, int* result_count) {

    int* result = (int*)malloc(2*sizeof(int));
    int result0 = 0,result1 = 0,maximal = 0,k = 0;

    for (int i = 0; i < topic_count-1; i++)
    {
        for (int j = i+1; j < topic_count; j++)
        {
            while (topic[i][k] != 0)
            {
                if(topic[i][k] == '1' || topic[j][k] == '1')   maximal++;      
                
                k++;
            }

            k = 0;

            if(maximal > result0){  result0 = maximal;  result1 = 1;    }
            else if(maximal == result0) result1++;

            maximal = 0;
        } 
    }
    
    result[0] = result0;                                                    
    result[1] = result1;

    *result_count = 2;

    return result;
}


int main(){

    system("PAUSE");

    return 0;

}