#include <stdio.h>
#include "include/print.h"  
#include "include/input.h"  

int main() 
{
    int num = get_Input();  

    if (num < 1 || num > 100) {
        printf("Input Error\n");
        return 0;  
    }

    print_Result(num);  
    return 0;
}
