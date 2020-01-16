#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int beautifulDays(int i, int j,int k) {

    int m,n,reverseNumber = 0;
    int numberOfDigits = 1;
    int result = 0;

    for (m = i; m <= j; m++)
    {
        n = m;

        while (n / 10 > 0){    n /= 10;    numberOfDigits++;   }

        n = m;

        for (int l = 1; l <= numberOfDigits; l++)
        {
            reverseNumber += ((n % 10) * (int)pow((double)(10),(double)(numberOfDigits - l)));
            
            n /= 10;
        }

        if(abs(m-reverseNumber) % k == 0)  result++;

        reverseNumber = 0;
        numberOfDigits = 1;
    }
    
    return result;
}

int main(){



    system("PAUSE");

    return 0;

}