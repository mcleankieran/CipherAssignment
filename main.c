#include <stdio.h>
#include <stdlib.h>


void rotationCipher(char rotationCipher[], int n);

int main() {
    
    char plainText[200];
    int key;
    
    printf("Please enter message to be encrypted (in capital letters): ");
    scanf("%s", plainText);
    
    printf("Please enter value for key: ");
    scanf("%d", &key);
    
         
         rotationCipher(plainText, key);
    
    
    printf("The encrypted message is: %s", plainText);
    
return 0;
}

void rotationCipher(char rotationCipher[], int n)
{
    int i;
    
    for(i=0; i<rotationCipher[i]; i++)
    {
        rotationCipher[i] = rotationCipher[i] + n;
    }
}

