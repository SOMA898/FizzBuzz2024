#include <stdio.h>

void main(void)
{
    int i, last = 0;

    printf("�����܂Ő����邩�w�肵�ĉ�����");
    scanf("%d", &last);

    for (i = 1; i <= last; i++)
    {
        if (i % 15 == 0)
            printf("FizzBuzz\n");
        else if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
}