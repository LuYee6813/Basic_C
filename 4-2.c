# include <stdio.h>
int main() {
    int ans = 4;
    int guess;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if (guess > ans) {
        printf("Too large!\n");
    }
    if (guess < ans) {
        printf("To samll!\n");
    }
    if (guess == ans) {
        printf("Correct!\n");
    }
    return 0;
}