#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int migratoryBirds(int arr_count, int* arr) 
{
    int wanted=0;
    int temporary1=0;
    int temporary2=0;

    for (int i = 0; i < arr_count; i++)
    {
        for (int j = i+1; j < arr_count; j++)
            if(arr[i]==arr[j])  temporary1++;

        
        if(temporary1>temporary2){  temporary2=temporary1;  wanted=arr[i];  }
        else if(temporary1==temporary2 && arr[i]<wanted) wanted=arr[i];
        
        temporary1=0;
    }
    
    return wanted;
}


int main(){

    

    system("PAUSE");

    return 0;

}