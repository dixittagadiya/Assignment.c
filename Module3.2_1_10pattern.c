#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j, n;

    printf("Enter a Number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            n = 1;
        }

        else
        {
            n = 1;
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", n);
            if (n == 0)
            {
                n = 1;
            }

            else
            {
                n = 0;
            }
        }
        printf("\n");
    }

    return 0;
}