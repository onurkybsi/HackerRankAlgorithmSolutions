#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void minandmax(int a_count, int* a, int b_count, int* b){


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
    
    int j=0;
    int k=0;

    for (int i = maxA; i <= minB; i++)
    {

        for (j = 0; j < b_count; i++)
        {
            if( b[j] % i !=0 )  break;
        }

        printf("%d\n",j);

        for (k = 0; k < a_count; k++)
        {
            if( i % a[k] !=0 )  break;
        }

        printf("%d\n",k);

    }

}

int main(){

    int a[2]={2,4};
    int b[3]={16,32,96};

    minandmax(2,a,3,b);


    system("PAUSE");

    return 0;

}