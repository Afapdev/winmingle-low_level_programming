#include "main.h"

int main(void)
{
    char str1[] = "123456789";
    char str2[] = "HelloWorld";

    printf("Task 7: puts_half\n");
    puts_half(str1);  // Expected: 56789
    puts_half(str2);  // Expected: World

    return 0;
}
