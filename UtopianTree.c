#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int utopianTree(int n) {

    int height =1;

    for (int i = 1; i <= n; i++)
    {
        if(i%2 != 0)    height *= 2;
        else    height++;    
    }
    
    return height;
}

int main(){

   

    system("PAUSE");

    return 0;

}