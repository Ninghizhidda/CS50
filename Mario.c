#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do 
    {
        h = get_int("Height ");
    } 
    while (!(h > 0 && h < 9));
    
    
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if ( j < h - 1 - i )
                {
                    printf(" ");
                }
            else
                {
                    printf("#");
                }
            

        }

        printf("\n");
       
        
    }


}
