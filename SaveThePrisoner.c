#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int saveThePrisoner(int n, int m, int s) {

    int i = s;

    while (m != 1)
    {
        if(i == n)  i = 0; 

        m--;
        i++;
    }
    
    return i;
}

int main(){

    printf("%d",saveThePrisoner(3,7,3));

    system("PAUSE");

    return 0;

}