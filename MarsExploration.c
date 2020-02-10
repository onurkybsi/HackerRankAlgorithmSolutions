#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int marsExploration(char* s) {

    int i = 0,result = 0;

    while (s[i] != '\0') 
    {
        if(i % 3 == 1)
        {
            if (s[i] !=  'O')   result++;
        }
        else
            if(s[i] != 'S') result++;
        
        i++;
    }

    return result;
}

int main(){

    system("PAUSE");

    return 0;

}