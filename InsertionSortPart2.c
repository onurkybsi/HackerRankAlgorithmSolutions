#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void insertionSort2(int n, int arr_count, int* arr) {

    int temp;

    for (int i = 1; i < arr_count; i++)
    {
        for (int k = i; k > 0; k--)
        {
            if(arr[k] < arr[k-1])
            {
                temp = arr[k];
                arr[k] = arr[k-1];
                arr[k-1] = temp;
            }
        }

        for(int j = 0; j < arr_count; j++)  printf("%d ",arr[j]);
        printf("\n");
    }
}

int main(){

    system("PAUSE");

    return 0;

}