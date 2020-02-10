#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* funnyString(char* s) {

    int length = 0, i = 0;

    while(s[length] != '\0')    length++;

    while (i != length/2) 
    {
        if(abs(s[i] - s[i+1]) != abs(s[length-i-1] - s[length-i-2]))
            return "Not Funny";
        
        i++;
    }

    return "Funny";
}

int main(){

    system("PAUSE");

    return 0;

}