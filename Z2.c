#include <stdio.h>
int main(){
int lenght ;
int result1;
int result2;
int height;
printf("vuvedi duljina:");
scanf("%d",&lenght);
printf("vuvedi visochina:");
scanf("%d",&height);
result1=lenght * height;
printf("Obikolkata e:%d\n",result1);
result2=2*lenght + 2*height;
printf("Liceto e:%d",result2);
return 0;
}