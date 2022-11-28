#include <stdio.h>

int main() {

float Uf,R,Uin,I;

printf("Vuvedi Uin:");
scanf("%f",&Uin);
printf("Vuvedi Uf:");
scanf("%f",&Uf);
printf("Vuvedi I:");
scanf("%f",&I);

R= (Uin-Uf)/I;

    printf("Resistance is:%.3f\ Kom",R);

    return 0;
}