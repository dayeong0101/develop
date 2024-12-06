#include <stdio.h>
#include "include/print.h"  

void print_Result(int num) {
    printf("\n[Input : %d]\n", num);
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
