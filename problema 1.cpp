#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n1,n2;
 do{
 
 printf("ingrese el primer numero:\n");
 scanf("%d",&n1);
 printf("ingrese el segundo numero:\n");
 scanf("%d",&n2);
    if(n1>=0 && n1<=200 && n2>=0 && n2<=200)
      {
	     if(n1==n2)
	         {
	        	  printf("el numero %d y el numero %d son iguales:\n",n1,n2);
	         }
	     else
	         {
	             	 printf("el numero %d y el numero %d no son iguales:\n",n1,n2);
	         }
      }
    else
      {
      	printf("la opcion seleccionada no es vaida ingrese el numero nuevamente:\n");
	  }
}while(n1<=0||n2<=0);
system("PAUSE");
return 0;
}
