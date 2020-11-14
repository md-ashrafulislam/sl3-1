#include <stdio.h>
#include <math.h>
int main(){
/*int D,  year, month, day, age;
scanf("%d", &D);

year = floor(D/365);
month = floor((D%365)/30);
day = (month%365);

printf("1 ano(s) %d\n", year);
printf("1 mes(es) %d\n", month);
printf("5 dia(s) %d\n",day); */

int N,h,m,s;

scanf("%d", &N);
h = N/3600;
m = (N-(h*3600))/60;
s = (N-(h+m));

printf("%d:%d:%d\n", h,m,s);




     return 0;
} 

