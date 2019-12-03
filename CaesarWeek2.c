#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    printf("%s\n", argv[0]);
    if (argc == 2) {
        //printf("Success");
        //printf("\n");
        //printf("%s", argv[1]);
        
        int checkInt = 0;
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (argv[1][i] >= '0' && argv[1][i] <= '9')
            {
                checkInt = 0;
            }
            else
            {
                checkInt = 1;
                return 1;
            }
        }
        int k = atoi(argv[1]);
        //printf("%i", k);
        //printf("\n");
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            printf("%c", (plaintext[i] + k));
        }
        printf("\n");
    }
    else {
        printf("Usage: %s key", argv[0]);
        printf("\n");
        return 1;
        
    }
    
}
