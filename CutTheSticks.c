#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* cutTheSticks(int arr_count, int* arr, int* result_count) {

    int temp;

    // Bubble Sort
    for(int i=0;i<arr_count-1;i++){

        for(int j=0;j<arr_count-1;j++){

            if(arr[j]>arr[j+1]){

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    

}


int main(){



    system("PAUSE");

    return 0;

}