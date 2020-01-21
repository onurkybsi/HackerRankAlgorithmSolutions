#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* permutationEquation(int p_count, int* p, int* result_count) {

    int* result = (int*)malloc(sizeof(int)*p_count);
    
    for (int i = 1; i <= p_count; i++)
    {
        for (int j = 0; j < p_count; j++)
        {
            if(p[j] == i)
            {
                for (int k = 0; k < p_count; k++)
                {
                    if(p[k] == j+1)
                    {
                        result[i-1] = k+1;

                        break;
                    }
                }
                
                break;
            }
        }
    }   
    
    *result_count = p_count;

    return result;
}

int main(){

   

    system("PAUSE");

    return 0;

}