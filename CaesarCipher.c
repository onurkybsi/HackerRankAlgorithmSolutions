#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* caesarCipher(char* s, int k) {

    int i = 0;

    while(s[i] != '\0') i++;

    char* result = (char*)malloc(sizeof(char)*i);

    i = 0;
    
    while (s[i] != '\0')
    {
        if(s[i] >= 65 && s[i] <= 90)
            result[i] = (((s[i] - 65 + k) % 26) + 65);
        else if(s[i] >= 97 && s[i] <= 122)
            result[i] = (((s[i] - 97 + k) % 26) + 97);
        else
            result[i] = s[i];

        i++;
    }
    
    return result;
}

int main(){

    system("PAUSE");

    return 0;

}