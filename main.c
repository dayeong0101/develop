#include <stdio.h>
#include "include/print.h"  
#include "include/input.h"  

#define PASS (1)
#define SKIP (0)
#define FAIL (-1)

int main() 
{
    int num = get_Input();  

    if (num < 1 || num > 100) {
        printf("Input Error\n");
        return PASS;  
    }

    print_Result(num);  
    return 0;
}
