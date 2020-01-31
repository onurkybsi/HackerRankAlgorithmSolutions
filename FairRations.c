#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int fairRations(int B_count, int* B) {

    int result = 0;

    for (int i = 0; i < B_count-1; i++)
    {
        if(B[i] % 2 != 0)
        {
            B[i]++;
            B[i+1]++;

            result += 2;
        }

        printf("%d\n",B[i]);
    }
    
    if(B[B_count-1] % 2 != 0){  printf("NO");   return 0;   }
    else{   return result; }
}


int main(){

    system("PAUSE");

    return 0;

}