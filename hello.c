#include <stdio.h>

int main() {
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s! Welcome to C programming.\n", name);
    return 0;
}
