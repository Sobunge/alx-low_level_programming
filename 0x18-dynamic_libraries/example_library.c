// 100-operations.c

#include <stdio.h>

// C function for addition
int add(int a, int b) {
    return a + b;
}

// C function for subtraction
int sub(int a, int b) {
    return a - b;
}

// C function for multiplication
int mul(int a, int b) {
    return a * b;
}

// C function for division
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Handle division by zero gracefully
    }
}

// C function for modulo
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error: Modulo by zero\n");
        return 0; // Handle modulo by zero gracefully
    }
}

