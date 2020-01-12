#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* dayOfProgrammer(int year) {

    char yearString[4]="????";
    
    sprintf(yearString,"%d",year);

    char* result = (char*)malloc(10*sizeof(char));

    if(year == 1918)
        result = "26.09.1918";
    else
    {
        if ((year < 1918 && year % 4 == 0) || (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
           result="12.09."; strcat(result,yearString);
        }
        else
        {
           result="12.09."; strcat(result,yearString);
        }
        
    }
    
    return result;
}




int main(){


    printf("%s",dayOfProgrammer(2016));

    system("PAUSE");

    return 0;

}