#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {

    for (int i = 0; i < queries_count; i++)
    {
        result_count[i] = a[(queries[i]+(a_count%k))%queries_count];
    }
    
    return result_count;
}


int main(){

    int* a = (int*)malloc(3*sizeof(int));

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    int querycount = 3;

    int* q = (int*)malloc(querycount*sizeof(int));

    q[0] = 0;
    q[1] = 1;
    q[2] = 2;
    

    int* result = (int*)malloc(querycount*sizeof(int));

    for (int i = 0; i < querycount; i++)
    {
        printf("%d ",circularArrayRotation(3,a,2,querycount,q,result)[i]);
    }
    
 
    system("PAUSE");

    return 0;

}