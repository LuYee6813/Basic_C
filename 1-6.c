#include <stdio.h>
int main() {
    int integer1,integer2,sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);

    // Solution 1
    // int temp = integer1;
    // integer1 =integer2;
    // integer2 = temp;

    // Solution 2
    integer1 = integer1 ^ integer2;
    integer2 = integer1 ^ integer2;
    integer1 = integer1 ^ integer2;

    printf("integer1 is %d.\n" ,integer1);
    printf("integer2 is %d.\n" ,integer2);
    // %d代表10進位
    return 0;
}