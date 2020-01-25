#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long repeatedString(char* s, long n) {

    int s_count = 0;
    int a_count = 0;
    long result = 0;

    while (s[s_count] != 0)
    {
        if(s[s_count] == 'a')   a_count++;     
        
        s_count++;  
    }

    for (int i = 0; i < (n % s_count); i++)
        if(s[i] == 'a') result++;
    
    
    return (result + a_count*(n/s_count));
}

int main(){

    
    system("PAUSE");

    return 0;

}