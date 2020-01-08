#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divisibleSumPairs(int n, int k, int ar_count, int* ar) 
{
    int result=0;

    for (int i = 0; i < ar_count; i++)
    {
        for (int j = i+1; j < ar_count; j++)
            if((ar[i]+ar[j])%k==0)  result++;
    }
    
    return result;
}

int main(){

    

    system("PAUSE");

    return 0;

}