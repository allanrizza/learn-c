#include <stdio.h>
int main() {

    // Arrays can only have one type of variable, because they are implemented as a sequence of values in the computer's memory. Because of that, accessing a specific array cell is very efficient.

    int numbers[10];

    numbers[0] = 19;
    numbers[1] = 32;
    numbers[2] = 45;
    numbers[3] = 47;
    numbers[4] = 51;
    numbers[5] = 64;
    numbers[6] = 88;

    printf("The 7th number in the array is %d", numbers[6]);
}
