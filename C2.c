#include<stdio.h>
  int main()
  {
   int i = 1,n,result;
    printf("enter a number:");
    scanf("%d" , &n);

        while(i <= 10)
        {
            result = i*n;
           printf ("%d * %d = %d\n" ,n, i, result );
           i= i+1;

        }

  }
