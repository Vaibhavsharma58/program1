#include<iostream>
#include <cmath>
#include<cstdlib>
#include <iomanip>
#include<string>
#define MAX 1000
using namespace std;

int bintohex()
{
        char bina[MAX],hexa[MAX];
        int temp;
        long int i=0,j=0;
        cout<<"\n Enter Binary Number : ";
        long int longint=0;
        string buf;
        cin>>buf;
        int len=buf.size();
        for(int i=0;i<len;i++)
        {
        longint+=( buf[len-i-1]-48) * pow(2,i);


        }
        cout<<setbase(16);
        cout<<longint;



        return 0;


}
int hextobin()
{
        int i=0;
        char hexa[100];
        cout<<"\n Enter Hexadecimal Number : ";
        cin>>hexa;
        cout<<"\n Conversion of Hexadecimal Number to Binary Number : ";
        while(hexa[i])
        {
                switch(hexa[i])
                {
                        case '0' : cout<<"0000";
                                   break;
                        case '1' : cout<<"0001";
                                   break;
                        case '2' : cout<<"0010";
                                   break;
                        case '3' : cout<<"0011";
                                   break;
                        case '4' : cout<<"0100";
                                   break;
                        case '5' : cout<<"0101";
                                   break;
                        case '6' : cout<<"0110";
                                   break;
                        case '7' : cout<<"0111";
                                   break;
                        case '8' : cout<<"1000";
                                   break;
                        case '9' : cout<<"1001";
                                   break;
                        case 'A' :
                        case 'a' : cout<<"1010";
                                   break;
                        case 'B' :
                        case 'b' : cout<<"1011";
                                   break;
                        case 'C' :
                        case 'c' : cout<<"1100";
                                   break;
                        case 'D' :
                        case 'd' : cout<<"1101";
                                   break;
                        case 'E' :
                        case 'e' : cout<<"1110";
                                   break;
                        case 'F' :
                        case 'f' : cout<<"1111";
                                   break;

                        default : cout<<"\nInvalid Hexadecimal Digit"<<hexa[i];
                }
                i++;
        }
        return 0;
}

int octtobin()
    {int oct;
     int dec=0,bin=0,rep=0;
     cout<<"Enter an Octal Number"<<endl;
     cin>>oct;
     while(oct!=0)
          {
           dec+=(oct%10)*pow(8,rep);
           ++rep;
           oct=oct/10;
          }
     rep=1;
     while(dec!=0)
          {
           bin+=(dec%2)*rep;
           dec=dec/2;
           rep=rep*10;
          }
     cout<<"\nBinary number is "<<bin;

     }

int bintooct()
{
     int oct2,dec2=0,rep2=0,bin2=0;
      cout<<"Enter a binary number"<<endl;
      cin>>bin2;
      while(bin2!= 0)
      {
         dec2+=(bin2%10)*pow(2,rep2);
         ++rep2;
         bin2=bin2/10;
      }
        rep2=1;
        while(dec2!=0)
        {
         oct2+=(dec2%8)*rep2;
         dec2=dec2/8;
         rep2=rep2*10;
       }
   cout<<"\nOctal number is "<<oct2;



}




int main()
   { int ch;

     do
       {cout<<"\n\nEnter an operation"<<endl;
        cout<<"1-To convert from Hexadecimal to binary"<<endl<<"2-To convert from Binary to hexadecimal"<<endl<<"3-To convert from octal to binary"<<endl<<"4-To convert from binary to octal"<<endl<<"5-EXIT"<<endl;
        cin>>ch;
        switch(ch)
           {case 1: hextobin();
                    break;
            case 2: bintohex();
                    break;
            case 3: octtobin();
                    break;
            case 4: bintooct();
                    break;
            case 5: exit(0);


            default:cout<<"INVALID OPERATION"<<endl;
           }


       }while(1);
     return(0);

    }

