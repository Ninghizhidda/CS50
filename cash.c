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
    
    int mincoins = mincoins(cents);
    //printf("%i\n", mincoins);
}

int mincoins(int num1) {

   /* local variable declaration */
   int result = 0;
    int currentnum1 = num1;
    while (currentnum1 >= 25)
    {
        // Do something
        currentnum1 = num1 - 25;
        result ++;
    }
    
    while (currentnum1 >= 10)
    {
        // Do something
        currentnum1 = num1 - 10;
        result ++;
    }
    
    while (currentnum1 >= 5)
    {
        // Do something
        currentnum1 = num1 - 5;
        result ++;
    }
    
    while (currentnum1 >= 1)
    {
        // Do something
        currentnum1 = num1 - 1;
        result ++;
    }
 
   return result; 
}
