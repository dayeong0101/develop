#include <stdio.h>
#include "include/input.h" 

int get_Input() {
    int num;
    printf("Input Num : (1~9): ");
    scanf("%d", &num);
    return num;
}
