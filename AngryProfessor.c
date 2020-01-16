#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* angryProfessor(int k, int a_count, int* a) {

    int onTime = 0;

    for (int i = 0; i < a_count; i++)   if(a[i] <= 0)   onTime++;
        
    if(onTime >= k)    return "NO";
    else    return "YES";

}

int main(){

   

    system("PAUSE");

    return 0;

}