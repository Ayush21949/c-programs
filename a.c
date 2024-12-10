#include <stdio.h>

// Function to swap two numbers (Call by Reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d\n",*a,*b);
}

int main() {
    int x = 10, y = 20;

    printf("Before function call: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // Passing addresses of x and y
    printf("After function call: x = %d, y = %d\n", x, y);

    return 0;
}
