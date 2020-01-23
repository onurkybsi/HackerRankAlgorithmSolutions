#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* appendAndDelete(char* s, char* t, int k) {

    int numberOfProcess = 0;
    int sLength = 0,tLength = 0,samePart = 0;

    while (s[sLength] != 0 || t[tLength] != 0)
        {
            if(s[sLength] != 0) sLength++;
            if(t[tLength] != 0) tLength++;
        }
    
    while (s[samePart] == t[samePart])  samePart++;

    if(s[0] != t[0])    numberOfProcess = sLength + tLength;
    else if(sLength > tLength)  numberOfProcess = sLength - samePart;
    else    numberOfProcess = (sLength + tLength - (2*samePart));

    
    if(k < numberOfProcess) return "No";
    else if(sLength < tLength && k > numberOfProcess && k > sLength && sLength + tLength > k)  return "No";
    else    return  "Yes"; 
}

int main(){


    system("PAUSE");

    return 0;

}