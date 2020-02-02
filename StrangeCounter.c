#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long strangeCounter(long t) {

    long upperBound = 3;

    while (upperBound < t)  upperBound = ((((upperBound / 3) * 2) + 1) * 3);
    
    return ((upperBound + 1) - t);
}

int main(){

    system("PAUSE");

    return 0;

}