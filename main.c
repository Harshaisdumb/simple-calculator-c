/*
 * Simple Calculator
 * Team 1
 * Concepts: Switch Case, Operators, Functions
 */
#include <stdio.h>

void showMenu() {
    printf("\n--- Calculator Menu ---\n");
    printf("1. Add (+)\n2. Subtract (-)\n3. Multiply (*)\n4. Divide (/)\n5. Modulus (%%)\n6. Exit\n");
    printf("Enter choice: ");
}

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? a / b : 0; }

int main() {
    int ch;
    double x, y;
    while (1) {
        showMenu();
        if (scanf("%d", &ch) != 1 || ch == 6) break;
        if (ch >= 1 && ch <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            if (ch == 1) printf("Result: %.2f\n", add(x, y));
            else if (ch == 2) printf("Result: %.2f\n", sub(x, y));
            else if (ch == 3) printf("Result: %.2f\n", mul(x, y));
            else if (ch == 4) {
                if (y == 0) printf("Error: Division by zero!\n");
                else printf("Result: %.2f\n", divide(x, y));
            }
        } else if (ch == 5) {
            int a, b;
            printf("Enter two integers for modulus: ");
            scanf("%d %d", &a, &b);
            if (b == 0) printf("Error: Modulus by zero!\n");
            else printf("Result: %d %% %d = %d\n", a, b, a % b);
        } else {
            printf("Invalid selection.\n");
        }
    }
    printf("Calculator closed.\n");
    return 0;
}
