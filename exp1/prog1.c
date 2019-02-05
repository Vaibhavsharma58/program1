#include <stdio.h>
#include <math.h>
int decimal(int n);
int binary(int n);
int main()
{
   int n;
   int c;
   printf("Enter\n");
   printf("1. Enter alphabet 1 to convert binary to decimal.\n");
   printf("2. Enter alphabet 2 to convert decimal to binary.\n");
   scanf("%d",&c);
   if (c ==1)
   {
       printf("Enter a binary number: ");
       scanf("%d", &n);
       printf("%d in binary = %d in decimal", n, decimal(n));
   }
   if (c ==2)
   {
       printf("Enter a decimal number: ");
       scanf("%d", &n);
       printf("%d in decimal = %d in binary", n, binary(n));
   }
   return 0;
}

int binary(int n)
{
    int rem, i=1, bin=0;
    while (n!=0)
    {
        rem=n%2;
        n/=2;
        bin=bin + rem*i;
        i*=10;
    }
    return bin;
}

int decimal(int n)
{
    int deci=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        deci =deci + rem*pow(2,i);
        ++i;
    }
    return deci;
}
