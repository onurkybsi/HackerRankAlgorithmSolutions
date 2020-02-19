#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// int* closestNumbers(int arr_count, int* arr, int* result_count) {

//     int i = 0, j = 0, k = 0;
//     int* result = (int*)malloc(sizeof(int)*2);

//     for(i=0;i<arr_count-1;i++)
//     {
//         for(j=0;j<arr_count-1;j++)
//         {

//             if(arr[j]>arr[j+1])
//             {
//                 k=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=k;
//             }
//         }
//     }
    
//     k = abs(arr[0] - arr[1]); 
    
//     result[0] = arr[0];
//     result[1] = arr[1];
    
//     j = 2;

//     for (i = 1; i < arr_count-1; i++)
//     {
//         if(abs(arr[i] - arr[i+1]) > k){ }
//         else if(abs(arr[i] - arr[i+1]) < k)
//         {
//             k = abs(arr[i] - arr[i+1]);

//             memset(result,0,sizeof(arr));

//             result[0] = arr[i];
//             result[1] = arr[i+1];

//             j = 2;
//         }
//         else if(abs(arr[i] - arr[i+1]) == k)
//         {
//             j += 2;

//             result[j-2] = arr[i];
//             result[j-1] = arr[i+1];
//         }
//     }
    
//     *result_count = j;

//     return result;
// }

int* closestNumbers(int arr_count, int* arr, int* result_count) {

    int* result = (int*)malloc(sizeof(int)*2);

    int difference = abs(arr[0]-arr[1]), k = 0;

    for (int i = 0; i < arr_count-1; i++)
    {
        for (int j = i+1; j < arr_count; j++)
        {
            if(abs(arr[i] - arr[j]) > difference)   continue;
            else if(abs(arr[i] - arr[j]) < difference)
            {
                difference = abs(arr[i] - arr[j]);

                memset(result,0,sizeof(arr));   

                k = 0;

                if(arr[i] <= arr[j])
                {
                    result[k] = arr[i];
                    result[k+1] = arr[j];
                }
                else
                {
                    result[k] = arr[j];
                    result[k+1] = arr[i];
                }
                

                k += 2;
            }
            else
            {
                result[k] = arr[i];
                result[k+1] = arr[j];

                k += 2;
            }
        }
    }
    
    *result_count = k;

    return result;
}

int main(){

    system("PAUSE");

    return 0;

}