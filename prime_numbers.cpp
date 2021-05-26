#include <stdio.h>
int main()
{
   int num1, num2, num3, i, j;
 	num1=500;
 	num2=599;
   //Display prime numbers for input range
   for(i=num1+1; i<num2; ++i)
   {
      num3=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            num3=1;
            break;
         }
      }
      if(num3==0)
         printf("%d\n",i);
  }
  return 0;
}
