#include <stdio.h>

#define SIZE 10

int main() {
    //dashdjgashgsadhjsagdshdgsa
    double array[SIZE];
    double sum = 0.0;
    double result;
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    result = sum / SIZE;
    printf("%.3f\n", result);
    return 0;
}

