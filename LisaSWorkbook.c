#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int workbook(int n, int k, int arr_count, int* arr) {

    int result = 0;
    int firstpageNum = 1;
    int currentPage = 1;
    int lastpageNum = 1;

    for (int i = 1; i <= n; i++)
    {
        firstpageNum = lastpageNum;
        currentPage = firstpageNum;
        lastpageNum += (int)ceil((double)arr[i-1]/k);

        for (int problem = 1; problem <= arr[i-1]; problem++)
        {
            if(problem % k == 0)    currentPage++;

            if(problem == currentPage)  result++;
        }

        printf("%d ",result);
    }
    
    return result;
}

int main(){

    system("PAUSE");

    return 0;

}