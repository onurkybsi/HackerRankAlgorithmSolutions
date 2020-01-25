#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int jumpingOnClouds(int c_count, int* c) {

    int i = 0;
    int result = 0;

    while (i != c_count-1)
    {
        if(c[i+2] == 0 && i+2 <= c_count-1)   i += 2;
        else    i++;

        result++;
    }

    return result;
}

int main(){

    
    system("PAUSE");

    return 0;

}