#include <stdio.h>

void other() {
    printf("You managed to find the secret!\n");
    fflush(stdout);
}

void input() {
    char buf[10];

    printf("Enter text:\n");

    scanf("%s", buf);

    printf("Your text: %s\n", buf);
    fflush(stdout);
}

int main() {
    input();
    return 0;
}