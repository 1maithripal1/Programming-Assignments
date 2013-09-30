#include <iostream.h>
#include <stdlib.h>

int main()
{
 int number1;
 int i;
 int ntimes;
 int tot;
  cout << "Enter number of times ";
 cin >> ntimes;
 i=1;
 tot=0;
    while  (i <= ntimes)
  {
    cout << "Enter number to add ";
    cin >> number1;
    tot=tot+number1;
    i=i+1;
  }
 cout << tot << endl;
 system("PAUSE");
   return 0;
}
