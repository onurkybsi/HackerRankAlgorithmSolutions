#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {

    int apples_result=0;
    int oranges_result=0;

    for (int i = 0; i < apples_count; i++)
    {
        apples[i]+=a;
        
        if (apples[i]>=s && apples[i]<=t)
            apples_result++;
    }
    for (int i = 0; i < oranges_count; i++)
    {
        oranges[i]+=b;

        if (oranges[i]>=s && oranges[i]<=t)
            oranges_result++;
    }

    printf("%d\n",apples_result);
    printf("%d\n",oranges_result);
}


int main(){

    
    

    system("PAUSE");

    return 0;

}