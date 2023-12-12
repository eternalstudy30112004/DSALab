#include <stdio.h>

int main() {
    int num;
    char c;
int width = 80;
printf("%*s\n", width, "Dynamic Width");

    printf("\a\aEnter an integer followed by a character: ");
    float pi = 3.14159;
printf("Pi: %010.2f\n", pi);

    // Read an integer
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        // Handle error, clear input buffer, etc.
    }
    else {
        // Clear the input buffer
        while ((c = getchar()) != '\n' && c != EOF)printf("%c", c);
        
        // Continue with other operations
        printf("You entered: %d\n", num);
    }

    return 0;
}
