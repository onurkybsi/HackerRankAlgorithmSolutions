#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int squares(int a, int b) {

    int result = 0;
    double isThatTrue;

    for (int i = a; i <= b; i++)
    {
        isThatTrue = sqrt((double)i);

        if(isThatTrue == (int)(i/isThatTrue))    result++;
    }

    return result;
}


int main(){

    
    system("PAUSE");

    return 0;

}