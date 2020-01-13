#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countingValleys(int n, char* s) {

    int firstLevel = 0;
    int lastLevel = 0;
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        firstLevel = lastLevel;

        if(s[i] == 'U') lastLevel++;
        else    lastLevel--;

        if(firstLevel == 0 && lastLevel<0)    result++;
    }

    return result;
}


int main(){

    

    system("PAUSE");

    return 0;

}