#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int findDigits(int n) {

    int result = 0,divison = n;

    while (divison != 0)
    {
        if(divison % 10 != 0 && n % (divison % 10) == 0)   result++;  

        divison /= 10;
    }

    return result;
}

int main(){


    system("PAUSE");

    return 0;

}