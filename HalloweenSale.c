#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int howManyGames(int p, int d, int m, int s) {
    
    if(p == m)
    {
        return s/p;
    }
    else
    {
        int budget = s;
        int price = p;
        int result = 0;

        while (budget-price >= 0)
        {
            result++;

            budget -= price;
            
            if(price - d > m)  price -= d;
            else    price = m;
        }

        return result;
    }
}

int main(){


    system("PAUSE");

    return 0;

}