#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int theLoveLetterMystery(char* s) {

    int length = 0, i = 0, result = 0;

    while (s[length] != '\0')
        length++;

    while (i <= (double)length/2.0-1.0) 
    {
        if(s[i] != s[length-i-1])
            result += abs(s[i]-s[length-i-1]);
        
        i++;
    }

    return result;
}

int main(){

    system("PAUSE");

    return 0;

}