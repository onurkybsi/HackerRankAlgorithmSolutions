#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alternatingCharacters(char* s) {

    int i = 0, result = 0;

    while (s[i+1] != '\0')
    {
        if(s[i] == s[i+1])  result++;

        i++;
    }
    
    return result;
}


int main(){

   

    system("PAUSE");

    return 0;

}