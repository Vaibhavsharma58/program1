int binarytohexa();
int hexatobinary();
int binarytooctal();
int octaltobinary();


#include <stdio.h>
int main()
{int k;
do
 {
  printf("Choose option from 1 to 5\n\n");
  printf("Enter 1 to convert binary to hexadecimal\n");
  printf("Enter 2 to convert hexadecimal to binary\n");
  printf("Enter 3 to convert binary to octal\n");
  printf("Enter 4 to convert octal to binary\n");
  printf("Enter 5 to exit\n\n");
  scanf("%d",&k);
  switch(k)
    {
    case 1:binarytohexa();
           break;
    case 2:hexatobinary();
           break;
    case 3:binarytooctal();
           break;
    case 4:octaltobinary();
           break;
    case 5:exit(1);
           break;
    default:printf("Incorrect option");
    }
 }while(k);
return 0;
}

int binarytohexa()
{
long int a,hexa=0,i=1,remainder;
printf("Enter the binary number: ");
scanf("%ld", &a);
while (a != 0)
  {
   remainder=a%10;
   hexa=hexa+remainder*i;
   i=i*2;
   a=a/10;
  }
printf("The hexadecimal value is: %lX\n\n\n\n", hexa);
return 0;
}

int hexatobinary()
{
  char b[100],h[100];
  int i=0;
  printf("Enter the hexadecimal number ");
  scanf("%s",h);
  printf("\nThe binary value is: ");
  while (h[i])
    {
     switch (h[i])
     {
        case '0':printf("0000");
                 break;
        case '1':printf("0001");
                 break;
        case '2':printf("0010");
                 break;
        case '3':printf("0011");
                 break;
        case '4':printf("0100");
                 break;
        case '5':printf("0101");
                 break;
        case '6':printf("0110");
                 break;
        case '7':printf("0111");
                 break;
        case '8':printf("1000");
                 break;
        case '9':printf("1001");
                 break;
        case 'A':printf("1010");
                 break;
        case 'B':printf("1011");
                 break;
        case 'C':printf("1100");
                 break;
        case 'D':printf("1101");
                 break;
        case 'E':printf("1110");
                 break;
        case 'F':printf("1111");
                 break;
        case 'a':printf("1010");
                 break;
        case 'b':printf("1011");
                 break;
        case 'c':printf("1100");
                 break;
        case 'd':printf("1101");
                 break;
        case 'e':printf("1110");
                 break;
        case 'f':printf("1111");
                 break;
        default:printf("\n Invalid hexadecimal number %c ", h[i]);
     }
    i++;
   }
printf("\n\n\n\n");
}

int binarytooctal()
{
long int binary,octal=0,i=1,rem;
printf("\nEnter the binary number: ");
scanf("%d",&binary);
while(binary !=0)
 {
  rem=binary%10;
  octal=octal+rem*i;
  i=i*2;
  binary=binary/10;
 }
printf("\nThe octal number is %lo\n\n\n\n",octal);
return 0;
}


int octaltobinary()
{ char R[100];
  int i=0;
  printf("\nEnter the octal number ");
  scanf("%s",R);
  printf("\nThe binary value is: ");
  while (R[i])
    {
     switch (R[i])
     {
        case '0':printf("000");
                 break;
        case '1':printf("001");
                 break;
        case '2':printf("010");
                 break;
        case '3':printf("011");
                 break;
        case '4':printf("100");
                 break;
        case '5':printf("101");
                 break;
        case '6':printf("110");
                 break;
        case '7':printf("111");
                 break;
        default:printf("\n Invalid octal number %c",R[i]);
     }
    i++;
   }
printf("\n\n\n\n");
}

