# include <stdio.h>

int calculate(int a, int b, int c, int d, int *add, int *minus, int *multi, int *divide){
    *add = a + b + c + d;
    *minus = a - b - c - d;
    *multi = a * b * c * d;
    *divide = a / b / c / d;
}

int main(){
    int w, x, y, z;
    int add, minus, multi, divide;
    
    printf("Press Input Data : w x y z\n");
    scanf("%d %d %d %d", &w, &x, &y, &z);
    printf("Before Calculation: w = %d, x = %d, y = %d, z = %d\n", w, x, y, z);

    calculate(w, x, y, z, &add, &minus, &multi, &divide);
    printf("After add = %d\n", add);
    printf("After minus = %d\n", minus);
    printf("After multi = %d\n", multi);
    printf("After divide = %d\n", divide);
    
    return 0;
}