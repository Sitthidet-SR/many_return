#include <stdio.h>

int calculate(int a, int b, int c, int d, int *add, int *minus, int *multi, int *divide) {
    *add = a + b + c + d;
    *minus = a - b - c - d;
    *multi = a * b * c * d;
    *divide = a / b / c / d;
}

int main() {
    int w, x, y, z;
    int add, minus, multi, divide;
    char choice;
    
    printf("Press Input Data : w x y z\n");
    scanf("%d %d %d %d", &w, &x, &y, &z);
    printf("Before Calculation: w = %d, x = %d, y = %d, z = %d\n", w, x, y, z);
    
    calculate(w, x, y, z, &add, &minus, &multi, &divide);
    
    while(1) {
        printf("\nMenu:\n");
        printf("q = exit\n");
        printf("1 = add\n");
        printf("2 = minus\n");
        printf("3 = multi\n");
        printf("4 = divide\n");
        printf("Enter your choice: ");
        
        while (getchar() != '\n');
        scanf("%c", &choice);
        
        if (choice == 'q') {
            printf("Exiting program...\n");
            break;
        } else if (choice == '1') {
            printf("After add = %d\n", add);
        } else if (choice == '2') {
            printf("After minus = %d\n", minus);
        } else if (choice == '3') {
            printf("After multi = %d\n", multi);
        } else if (choice == '4') {
            printf("After divide = %d\n", divide);
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}