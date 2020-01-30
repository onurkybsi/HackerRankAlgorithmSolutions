#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int chocolateFeast(int n, int c, int m) {

    int result = n /c;
    int control = n / c;

    while (control >= m)
    {
        result += control / m;
        control = (control % m) + (control / m);
    }
    
    return result;
}

int main(){


    system("PAUSE");

    return 0;

}