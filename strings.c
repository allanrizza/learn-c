#include <stdio.h>
#include <stdlib.h>

int main() {
    char * str1 = "string number 1";
    char str2[] = "string number 2";

    printf("%s\n%s\n", str1, str2);

    str1 = "modifying string number 1";

    printf("%s\n", str1);

    printf("string 2 length: %d\n", strlen(str2));

    if(strncmp(str1, str2, 4) == 0) {
        printf("comparison returns true\n");
    } else {
        printf("comparison returns false\n");
    }

    char first[20]="String ";
    char second[20]="Concatenation";

    strncat(first, second, 3);
    printf("%s\n", first);

    strncat(first, second,20);
    printf("%s\n",first);

}