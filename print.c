#include <stdio.h>
#include "include/print.h"  // 함수 선언 포함

// 구구단 출력 함수
void print_Result(int num) {
    printf("\n[Input : %d]\n", num);
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
