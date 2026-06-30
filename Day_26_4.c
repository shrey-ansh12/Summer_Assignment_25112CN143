#include <stdio.h>

int main() {
    int answer;
    int score = 0;

    printf("Quiz Application\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. New Delhi\n");
    printf("3. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("2. Which language is used for system programming?\n");
    printf("1. HTML\n");
    printf("2. C\n");
    printf("3. CSS\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("3. Which symbol is used to end a statement in C?\n");
    printf("1. .\n");
    printf("2. ,\n");
    printf("3. ;\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer.\n\n");
    }

    printf("Quiz finished!\n");
    printf("Your score: %d/3\n", score);

    return 0;
}