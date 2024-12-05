#include <stdio.h>
#include "include/input.h" 

int get_Input() {
    int num;
    printf("[0 ~ 99]\n");
    printf("Input Num : ");
    scanf("%d", &num);
    return num;
}
