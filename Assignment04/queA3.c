

#include <stdio.h>

void fun_add(int a, int b); 
void fun_sub(int a, int b);
void fun_mul(int a, int b);
void fun_div(int a, int b);

int main() {
    int n1, n2; 
    enum cal { EXIT, ADD, SUB, MUL, DIV } ch; 

    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    
    printf("0. EXIT\n1. ADD\n2. SUB\n3. MUL\n4. DIV\n");
    printf("Your choice: ");
    scanf("%d", (int*)&ch);

    switch(ch) {
        case ADD: fun_add(n1, n2); break;
        case SUB: fun_sub(n1, n2); break;
        case MUL: fun_mul(n1, n2); break;
        case DIV: fun_div(n1, n2); break;
        case EXIT: return 0;
        default: printf("Invalid choice\n");
    }

    return 0;
}

void fun_add(int a, int b) {
    printf("Add = %d\n", a + b);
}

void fun_sub(int a, int b) {
    printf("Sub = %d\n", a - b);
}

void fun_mul(int a, int b) {
    printf("Mul = %d\n", a * b);
}

void fun_div(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
    } else {
        printf("Div = %d\n", a / b);
    }
}


