#include<stdio.h>
#include<conio.h>
main()
{
    int a,b=0,c=1,i,j;

    printf("Enter no");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        printf("%d",b);

        j=b+c;
        b=c;
        c=j;
    }
}