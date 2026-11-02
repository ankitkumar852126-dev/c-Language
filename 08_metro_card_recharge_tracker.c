#include<stdio.h>
int main(){
    int a, n,amount,total=0;
printf("enter a number of student\n");
scanf("%d",&n);
for(a=1;a<6;a++)
{

printf("enter the recharge amount of student");
scanf("%d",&amount);
total=total+amount;
}
printf("\n total recharge daily=%d",total);
return 0;
}