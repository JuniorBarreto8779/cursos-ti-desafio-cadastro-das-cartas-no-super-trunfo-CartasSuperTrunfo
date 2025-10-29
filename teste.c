#include <stdio.h>

int main(void) {
    char minha_string[100];
    
    printf("Digite uma frase: ");
    fgets(minha_string, sizeof(minha_string), stdin);
    
    printf("Você digitou: %s\n", minha_string);
    
    return 0;
}