#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int* stones(int n, int a, int b, int* result_count) {

    
    int* result = (int*)malloc(sizeof(int)*n);

    for (int i = 0; i <= n-1; i++)
    { 
        if(a < b)
        {
            result[i] = ((n-1-i)*a) + (i*b);

            *result_count = n;
        }  
        else if(b < a)
        {
            result[i] = ((n-1-i)*b) + (i*a);

            *result_count = n;
        }        
        else
        {
            result[i] = ((n-1-i)*a) + (i*b);

            *result_count = 1;

            break;
        }
    }

    return result;
}   

int main(){

    system("PAUSE");

    return 0;

}