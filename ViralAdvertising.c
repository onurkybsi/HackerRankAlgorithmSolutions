#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int viralAdvertising(int n) {

    int cumulative = 0;
    int shared = 5;

    for (int i = 1; i <= n; i++)
    {
        cumulative += (int)floor((double)shared/2);

        shared = 3*(int)floor((double)shared/2);

    }
    
    return cumulative;
}

int main(){


    system("PAUSE");

    return 0;

}