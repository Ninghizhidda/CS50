#include <cs50.h>
#include <stdio.h>
#include <math.h>

int mincoins(int num1);

int main(void)
{
    float change;
    do 
    {
        change = get_float("Change owed ");
    } 
    while (change < 1);
    
    int cents = round(change * 100);
    printf("%i\n", cents); 
}

int mincoins(int num1) {

   /* local variable declaration */
   int result = 0;
    int currentnum1 = num1;
    while (currentnum1 > 25)
    {
        // Do something
        currentnum1 = num1 - 25;
        result ++;
    }
    
    while (currentnum1 > 10)
    {
        // Do something
        currentnum1 = num1 - 10;
        result ++;
    }
 
    result = (num1 / 25);
   
 
   return result; 
}