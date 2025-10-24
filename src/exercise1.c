#include <stdio.h>

#define SIZE 10

int main() {
    double array[SIZE];
    double sum = 0.0;
    double result;
    printf("Введите вещественных чисел: %d\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Число %d: ", i + 1);
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    result = sum / SIZE;
    printf("%.3f\n", result);
    return 0;
}

