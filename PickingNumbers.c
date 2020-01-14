#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pickingNumbers(int a_count, int* a) {

    int searchingL =0;
    int searchingR =0;
    int result =0;

    for (int i = 0; i < a_count; i++)
    {
        searchingL =0;
        searchingR =0;

        for (int j = 0; j < a_count; j++)
        {
            if(a[i] >= a[j] && a[i] - a[j] <= 1)    searchingL++;
            if(a[i] <= a[j] && a[j] - a[i] <= 1)    searchingR++;

        }
        
        if(searchingL > result)  result = searchingL;
        else if(searchingR > result)    result = searchingR;   
    }
    
    return result;
}

int main(){

   

    system("PAUSE");

    return 0;

}