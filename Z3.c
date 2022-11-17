#include <stdio.h>
int main(){
int osnova1;
int osnova2;
int height;
int resultatlice;
printf("vuvedi osnova1:");
scanf("%d",&osnova1);
printf("vuvedi osnova2:");
scanf("%d",&osnova2);
printf("vuvedi height:");
scanf("%d",&height);
resultatlice=((osnova1 + osnova2)* height)/2;
printf("Liceto e:%d",resultatlice);
return 0;
}