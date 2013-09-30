#include <iostream.h>
#include <stdlib.h>

void main()
{
//clrscr();
int number,count=0;
cout<<"Enter number to check if it is prime or not? ";
cin>>number;

for(int a=2;a<=number;a++)
{
   if(number%a==0)
{
count++;
}
}

if(count==1)
{
cout<< "Prime Number \n";
}
else
{
cout<< "Not Prime Number \n";
}
//getch();
 system("PAUSE");
   return 0;
}

