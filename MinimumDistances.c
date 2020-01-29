#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int minimumDistances(int a_count, int* a) {

    int minDistance = a_count;

    for (int i = 0; i < a_count-1; i++)
    {
        for (int j = i+1; j < i+minDistance; j++)
        {
            if(a[i] == a[j]){  minDistance = j-i;  break;  }
        } 
    }
    
    if(minDistance < a_count)   return minDistance;
    else    return -1; 
}


int main(){



    system("PAUSE");

    return 0;

}