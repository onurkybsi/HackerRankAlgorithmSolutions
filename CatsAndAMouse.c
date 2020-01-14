#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* catAndMouse(int x, int y, int z) {

    int distanceXZ = abs(x-z);
    int distanceYZ = abs(y-z);

    if(distanceXZ == distanceYZ)    return "Mouse C";
    else if(distanceXZ < distanceYZ)    return "Cat A";
    else return "Cat B";
}


int main(){

   

    system("PAUSE");

    return 0;

}