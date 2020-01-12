#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sockMerchant(int n, int ar_count, int* ar) {

    int result = 0,sameSocks = 0;

    for (int i = 0; i < ar_count; i++)
    {
        if( ar[i] != 0)
        {
            for (int j = i+1; j < ar_count; j++)
            {
                if(ar[i] == ar[j]){ sameSocks++;    ar[j]=0;    }  
            }

            result += (sameSocks+1)/2;
        }
        
        sameSocks = 0;
    }
    
    return result;
}


int main(){

    

    system("PAUSE");

    return 0;

}