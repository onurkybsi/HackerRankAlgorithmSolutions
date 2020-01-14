#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hurdleRace(int k, int height_count, int* height) {

    int result =0;

    for (int i = 0; i < height_count; i++)  if(k < height[i] && height[i]-k > result) result = height[i]-k;
    
    return result;
}

int main(){

   

    system("PAUSE");

    return 0;

}