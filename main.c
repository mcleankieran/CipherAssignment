#include <stdio.h>
#include <stdlib.h>


void rotationCipher(char rotationCipher[], int n);

int main() {
    
    char plainText[200];
    int key;
    
    printf("Please enter message to be encrypted (in capital letters): ");
    scanf("%c", plainText);
    
    printf("Please enter value for key: ");
    scanf("%d", key);
    
    printf("The message to be encrypted is: %c", plainText);
    
    rotationCipher(plainText, key);
    
    printf("The encrypted message is: %d", plainText);
    
return 0;
}

void rotationCipher(char rotationCipher[], int n)

