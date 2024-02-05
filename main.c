#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int a, b, c;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Введите два целых числа\n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    c = a - b;
    printf("%d - %d = %d\n", a, b, c);
    c = a * b;
    printf("%d * %d = %d\n", a, b, c);

    return 0;
}
