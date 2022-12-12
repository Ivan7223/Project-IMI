#include <stdio.h>

int main () 
{
   int a=20,y=20;
  for(int i=0;i<21;i+=1)
  {
      printf("%d ",i);
  }
printf("\n");
while( a<=30)
{
 printf("%d ",a); 
 a++;
}
 printf("\n");
 for(int i=10;i<101;i+=5)
  {
      printf("%d ",i);
  }
         printf("\n");
          do
          {
           printf("%d ",y);
           y--;
           }
           while(y>=10);
         
         printf("\n");  
        for(int i=1000;i>=0;i=i-100)
  {
      printf("%d ",i);
  }   
           

 return 0;
}