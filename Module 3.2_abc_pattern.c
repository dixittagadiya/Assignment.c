#include <stdio.h>
#include <conio.h>

int main()
{
    char a, i, j, k = 'A';

    printf("Enter Any alphabet : ");
    scanf("%c", &a);

    for (i = 'A'; i <= a; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c", k++);
            
        }

        printf("\n");
    }

    return 0;
}