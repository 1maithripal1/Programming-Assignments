#include <iostream>

#include <stdlib.h>
using namespace std;
int main()
{

int number=0;
int count=0;
cout << "Enter number to check if it is prime or not? ";
cin >> number;

if (number==0) {
    cout << "Neither" << endl;
     system("PAUSE");
}

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

 system("PAUSE");
   return 0;
}

