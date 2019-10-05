#include <stdio.h>
#include<string.h>
int main()
{
   char* a[6];
   char* d[6];
   a[0]="ram";  a[1]="shyam"; a[2]="ramesh"; a[3]="naresh"; a[4]="suresh";  a[5]="sonu";
   long long int b[6],c[6];
   int i,j,f,t;
   b[0]="9461578942"; b[1]="9876432158"; b[2]="9856321475"; b[3]="9654785214"; b[4]="8965474123"; b[5]="9856471236";
   c[0]="187956811236"; c[1]="123698745632"; c[2]="158963247854"; c[3]="165987896542"; c[4]="123614789654"; c[5]="125874965896";
   d[0]="ram001"; d[1]="shyam002"; d[2]="ramesh003"; d[3]="naresh004"; d[4]="suresh005"; d[5]="sonu006";
   printf("press 1 for login and press 2 for sign up");
   scanf("%d",&i);
   char* p[1][256],m[1][256];
   switch(i)
   {
       do
       {
       case 1:printf("enter your name ");
       scanf("%s",&p[0]);
       printf("enter your password ");
       scanf("%s",&m[0]);
       for(j=0;j<6;j++)
       {
           f=strcmp(p[0],a[j]);
           if(f==0)
           {
              t=strcmp(m[0],d[j]);
              if(t==0)
              {
                printf("login successfully");
                break;
               }
              if(t!=0)
              {
                printf("try again\n");
              }
           }
       }
       if(f!=0)
        printf("invalid credentials\n  try again\n");
       }
           while(t!=0||f!=0);


   }
}