#include <stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,i=0;
    printf("Introduzca un numero: \n");
    scanf("%d",&num1);
    printf("Introduzca otro numero: \n");
    scanf("%d",&num2);
    if(num1>=0 && num2>=0)
    {
	
    if(num1>num2)
    {
    	printf("El numero %d es mayo al numero %d:\n",num1,num2);
    	printf("y hay un rango:\n");
    	for(i=num1;i>=num2;i--)
    	{
    	
    		printf("%d\n",i);
		}
	}
	else
	{
		printf("El numero %d es mayo al numero %d: \n",num2,num1);
		printf("hay un rango:\n");
			for(i=num2;i>=num1;i--)
    	{
    	
    		printf("%d\n",i);
		}
	}
   }
    else
    {
    	printf("este programa no acepta numeros negativos\n");
	}
	system("PAUSE");   
    return 0;
}
