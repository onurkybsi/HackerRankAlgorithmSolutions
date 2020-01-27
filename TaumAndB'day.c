#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long taumBday(int b, int w, int bc, int wc, int z) {
    
    if((wc + z) < bc)   return (((long)w*(long)wc) + ((long)(wc + z) * (long)b));
    else if((bc + z) < wc)   return (((long)b*(long)bc) + ((long)(bc + z) * (long)w));
    else    return (((long)w*(long)wc) + ((long)b*(long)bc));

}


int main(){

    system("PAUSE");

    return 0;

}