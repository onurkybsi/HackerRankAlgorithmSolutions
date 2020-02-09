#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 3
// abcdde
// baccd
// eeabg

int gemstones(int arr_count, char** arr) {

    int result = 0;
    int temp = 0;
    int m = 0;

    for (int i = 0; arr[0][i] != '\0'; i++)
    {
        for (m = i-1; m >= 0; m--)
            if(arr[0][m] == arr[0][i])  break;
        
        if(m >= 0)   continue;

        for (int j = 1; j < arr_count; j++)
        {
            for (int k = 0; arr[j][k] != '\0'; k++)
                if(arr[j][k] == arr[0][i]){ temp++; break;  }
            
            if(temp == 0)   break;
        }

        if(temp == arr_count-1) result++;

        temp = 0;
    }

    return result;
}

int main(){


    system("PAUSE");

    return 0;

}