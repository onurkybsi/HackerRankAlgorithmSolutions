#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* happyLadybugs(char* b) {

    int i = 0;
    int underScores = 0;
    int length = 0;

    while (b[i] != '\0'){   if(b[i] == '_'){    underScores++;  }   i++;    }

    length = i;
    i = 0;

    if(underScores == 0)
    {
        while (i < length)
        {
            if(b[i+1] != b[i] && b[i-1] != b[i])    return "NO";

            i++;
        } 
    }
    else
    {
        for (int j = 0; j < length; j++)
        {   
            if(b[j] == '_') continue;
            else
            {
                for (int k = 0; k < length; k++)
                {
                    if(k != j && b[k] == b[j])    break;
                    if(k == length - 1) return "NO";
                }
            }
        }
    }
    
    return "YES";
}

int main(){

    system("PAUSE");

    return 0;

}