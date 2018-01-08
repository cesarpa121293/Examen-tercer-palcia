#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,num4,num5;
    printf("Introduzca numero 1:");
    scanf("%d",&num1);
    printf("Introduzca numero 2:");
    scanf("%d",&num2);
    printf("Introduzca numero 3:");
    scanf("%d",&num3);
    printf("Introduzca numero 4:");
    scanf("%d",&num4);
    printf("Introduzca numero 5:");
    scanf("%d",&num5);

    if (num1<num2 && num1<num3)
    {
       if (num2<num3)
       {
        printf("%d",num1);
        printf("%d",num2);
        printf("%d",num3);
        printf("%d",num4);
        printf("%d",num5);
       }
       else
       {
        printf("%d",num1);
        printf("%d",num3);
        printf("%d",num2);
        printf("%d",num4);
        printf("%d",num5);
       }
    }
    else if (num2<num1 && num2<num3)
    {
       if (num1<num3)
       {
        printf("%d",num2);
        printf("%d",num1);
        printf("%d",num3);
        printf("%d",num4);
        printf("%d",num5);
       }
       else
       {
        printf("%d",num2);
        printf("%d",num3);
        printf("%d",num1);
        printf("%d",num4);
        printf("%d",num5);
       }
    }
    else if (num3<num1 && num3<num2)
    {
       if (num1<num2)
       {
        printf("%d",num3);
        printf("%d",num1);
        printf("%d",num2);
        printf("%d",num4);
        printf("%d",num5);
       }
       else
       {
        printf("%d",num3);
        printf("%d",num2);
        printf("%d",num1);
        printf("%d",num4);
        printf("%d",num5);
       }
    }
   
    system("PAUSE");     
    return 0;
}
