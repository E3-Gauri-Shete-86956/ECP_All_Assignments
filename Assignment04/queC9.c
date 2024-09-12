#include <stdio.h>


int fun_add(int a, int b, int* result);
int fun_sub(int a, int b, int* result);
int fun_mul(int a, int b, int* result);
int fun_div(int a, int b, int* result); 

int main() {
    int n1, n2, result;
    enum cal { EXIT, ADD, SUB, MUL, DIV } ch;
    int error_code = 0; 

 
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    
    printf("0. EXIT\n1. ADD\n2. SUB\n3. MUL\n4. DIV\n");
    printf("Your choice: ");
    scanf("%d", (int*)&ch);

    switch(ch) {
        case ADD:
            fun_add(n1, n2, &result);
            printf("Add = %d\n", result);
            break;
        case SUB:
            fun_sub(n1, n2, &result);
            printf("Sub = %d\n", result);
            break;
        case MUL:
            fun_mul(n1, n2, &result);
            printf("Mul = %d\n", result);
            break;
        case DIV:
            error_code = fun_div(n1, n2, &result);
            if (error_code == 1) {
                printf("Error: Division by zero\n");
            } else {
                printf("Div = %d\n", result);
            }
            break;
        case EXIT: 
            return 0;
        default: 
            printf("Invalid choice\n");
    }

    return 0;
}


int fun_add(int a, int b, int* result) {
    *result = a + b;
    return 0; 
}

int fun_sub(int a, int b, int* result) {
    *result = a - b;
    return 0; 
}

int fun_mul(int a, int b, int* result) {
    *result = a * b;
    return 0; 
}

int fun_div(int a, int b, int* result) {
    if (b == 0) {
        return 1; 
    } else {
        *result = a / b;
        return 0; 
    }
}
