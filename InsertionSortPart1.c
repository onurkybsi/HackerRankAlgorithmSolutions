#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void insertionSort1(int n, int arr_count, int* arr) {

    int storedValue = arr[n-1];

    for (int i = arr_count-2; i >= 0; i--)
    {
        if(arr[i] > storedValue)
        {
            arr[i+1] = arr[i];

            if(i == 0)
            {
                for (int j = 0; j < arr_count; j++) printf("%d ",arr[j]);
                printf("\n");
                
                arr[i] = storedValue;
            }
        }    
        else    arr[i+1] = storedValue;
        
        for (int j = 0; j < arr_count; j++) printf("%d ",arr[j]);

        if(arr[i+1] == storedValue) break;    

        printf("\n");
    }
}

int main(){

    system("PAUSE");

    return 0;

}