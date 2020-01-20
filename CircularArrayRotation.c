#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {

    int* result = (int*)malloc(sizeof(int)*queries_count);

    for (int i = 0; i < queries_count; i++)
    {
        if(k > a_count)
            result[i] = a[(queries[i]+(k*a_count)-k)%a_count];
        else
            result[i] = a[(queries[i]+a_count-k)%a_count];
    }
    
    *result_count = queries_count;

    return result;
}


int main(){


    system("PAUSE");

    return 0;

}