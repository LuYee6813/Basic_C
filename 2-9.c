#include <stdio.h>

int main() {
    char input, output;
    printf("Input A-Z:");
    scanf("%c", &input);
    output = input + 32;
    // A = 65 a = 97 
    printf("Output: %c\n", output);
    return 0;
}

