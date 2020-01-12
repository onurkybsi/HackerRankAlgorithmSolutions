#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bonAppetit(int bill_count, int* bill, int k, int b) {

    int sum = 0;

    for (int i = 0; i < bill_count; i++)
    {
        if(i != k)  sum += bill[i];
    }
    
    if(((sum/2)-b) != 0)    printf("%d",(b-(sum/2)));
    else    printf("Bon Appetit");
}


int main(){




    system("PAUSE");

    return 0;

}