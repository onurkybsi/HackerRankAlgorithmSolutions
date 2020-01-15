#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int designerPdfViewer(int h_count, int* h, char* word) {

    int i = 0;
    int maxHeight =0;

    while (word[i] != '\0')
    {
        for (int j = 0; j < h_count; j++)   if(word[i] == j+97 && h[j] > maxHeight)  maxHeight = h[j];
        
        i++;
    }
    
    return (maxHeight * i);
}

int main(){

   

    system("PAUSE");

    return 0;

}