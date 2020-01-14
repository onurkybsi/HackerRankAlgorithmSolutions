#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    
    int lowestPrice = keyboards[0] + drives[0];
    int highestPrice = 0;

    for (int i = 0; i < keyboards_count; i++)
    {
        for (int j = 0; j < drives_count; j++)
        {
            if(keyboards[i] + drives[j] <= b)
            {
                if(keyboards[i] + drives[j] < lowestPrice)  lowestPrice = keyboards[i] + drives[j];
                if(keyboards[i] + drives[j] > highestPrice) highestPrice = keyboards[i] + drives[j];
            }
        }
        
    }
    
    if(lowestPrice > b) return -1;
    else    return highestPrice;

}


int main(){

   

    system("PAUSE");

    return 0;

}