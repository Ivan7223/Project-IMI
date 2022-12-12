/#include <stdio.h>
#include <stdlib.h>

int main () {
   int i,n,min=21,max=0;
   float x,result=0;
   time_t t;
   
  n = 20;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   printf("min %d\n",min);
   for( i = 0 ; i < n ; i++ ) 
   {
     
      x=rand() % 20;
      result=result+x;
      printf("%.0f ", x);
      if(max<x)
      {
          max=x;
      }
      if(min>x)
      {
          min=x;
      }
   }
   
    printf("\n Sum of All numbers=%.1f",result);
    result=result/20;
    printf("\n Sum of average numbers=%.2f",result);
    
     {
     
    
    printf("\n Min number: %d",min );
    printf("\n Max number: %d",max );
     }
   return(0);
}