#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int beautifulTriplets(int d, int arr_count, int* arr) {

    int result = 0;

    for (int i = 0; i < arr_count; i++)
    {
        for (int j = i; j < arr_count; j++)
        {
            if(arr[i] + d == arr[j])
            {
                for (int k = j; k < arr_count; k++)
                {
                    if(arr[j] + d == arr[k])    result++;
                }
                
            }
        }
        
    }
    
    return result;
}

int main(){


    system("PAUSE");

    return 0;

}