#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* kangaroo(int x1, int v1, int x2, int v2) {

    if((x2 > x1 && v2 >= v1) || ((x1-x2) % (v2-v1)) != 0)
        return "NO";
    else
        return "YES";
}



int main(){




    system("PAUSE");

    return 0;

}