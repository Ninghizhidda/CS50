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
        //char result = "";
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            //printf("%i", ((plaintext[i] + k)));
            //printf("%c", ((plaintext[i] + k) ));
            //printf("%i", ((plaintext[i] + k) % 26));
            //printf("%c", 20);
            
            // apply transformation to each character 
            // Encrypt Uppercase letters 
            if (isupper(plaintext[i])) 
                printf("%c", (plaintext[i] + k - 65) % 26 +65);
            else
                printf("%c", (plaintext[i] + k - 97) % 26 +97);  

            // Return the resulting string 
            //printf("%c", result); 
        }
        printf("\n");
    }
    else {
        printf("Usage: %s key", argv[0]);
        printf("\n");
        return 1;
        
    }
    
}
