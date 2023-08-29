#include <stdio.h>
#include <conio.h>

int main()
{
    int  years,days;

    printf("Enter The number of years : ");
    scanf("%d",&years);

    days=365*years;

    printf("The number of day is : %d\n",days);

    printf("Enter The days number : ");
    scanf("%d",&days);

    years=days/365;

    printf("Number of years is : %d\n",years);

    return 0;
}