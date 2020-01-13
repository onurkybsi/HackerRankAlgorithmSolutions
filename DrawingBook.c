#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pageCount(int n, int p) {
    
    int fromFirst = p/2;
    int fromLast = n/2 - fromFirst;

    if(fromFirst == 0 || fromLast == 0) return 0;
    else if(fromFirst<fromLast) return fromFirst;
    else    return fromLast;
}


int main(){

    

    system("PAUSE");

    return 0;

}