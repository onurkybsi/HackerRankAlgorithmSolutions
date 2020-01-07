#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getTotalX(int a_count, int* a, int b_count, int* b) {

    int minB=b[0];
    int maxA=a[0];
    int result=0;
    
    for (int i = 0; i < b_count; i++)
    {
        if(b[i]<minB)
            minB=b[i];
    }

    for (int i = 0; i < a_count; i++)
    {
        if(a[i]>maxA)
            maxA=a[i];
    }
    
    int j,k;

    for (int i = maxA; i <= minB; i++)
    {

        for (j = 0; j < b_count; j++)
        {
            if( b[j] % i !=0 )  break;
        }

        for (k = 0; k < a_count; k++)
        {
            if( i % a[k] !=0 )  break;
        }
        
        if( j+k == b_count+a_count )    result++;
        
    }
    
    return result;
}


int main(){

    

    system("PAUSE");

    return 0;

}