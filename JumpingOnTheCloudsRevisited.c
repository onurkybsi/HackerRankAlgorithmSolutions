#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jumpingOnClouds(int c_count, int* c, int k) {

    int energy = 100;

    int i = k;

    while ((i%c_count) != 0)
    {
        if (c[i] == 1)  energy -= 3;
        else    energy--;

        i = (i+k) % c_count;
    }
    
    if(c[0] == 1)   return energy-3;
    else    return energy-1;
}

int main(){

   

    system("PAUSE");

    return 0;

}