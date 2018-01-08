#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("ingresar un numero :  ");
    scanf("%d",&num);
    do
    {
	
    if(num%2==0)
    {
                printf("El numero es par ingrese el numero nuevamente %d:\n",num);
                scanf("%d",&num);
    }
      else
          {   
             printf("El numero %d es impar:\n",num);
          }
      }while(num%2==0);
system("PAUSE");
return 0;
}
