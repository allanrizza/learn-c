#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%i\n", i);
    }

    printf("\n");

    char alphabet[5] = {'a', 'b', 'c', 'd', 'e'};

    int j;

    for(j = 0; j < strlen(alphabet); j++) {
        printf("%c\n", toupper(alphabet[j]));
    }
}