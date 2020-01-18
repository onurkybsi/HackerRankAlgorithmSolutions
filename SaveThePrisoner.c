#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int saveThePrisoner(int n, int m, int s)
{
    int result = (m+s-1) % n;

    if(result == 0)
        return n;
    else
        return result;
}

int main(){

 
    system("PAUSE");

    return 0;

}