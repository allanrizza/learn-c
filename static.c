#include <stdio.h>
static int sum (int num) {
    static int res = 0;
    res = res + num;
}

int main() {
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}