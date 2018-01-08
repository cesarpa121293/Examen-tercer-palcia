#include<iostream>
using namespace std;
int main(int argc,char**argv)
{
int num;
cout<<"ingrese un numero cualquiera"<<endl;
cin>>num;
do
{
if(num>=0&&num<=200)
{
cout<<"su numero elegido es "<<num<<endl;
}
else
{
cout<<"el numero ingresado no es valido ingreselo nuevamente"<<endl;
cin>>num;
}
}while(num<0&&num);



system("PAUSE");
return 0;
}
