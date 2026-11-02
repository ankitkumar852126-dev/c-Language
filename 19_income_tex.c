#include<stdio.h>
int main()
{

    int income;
    float tex=0;

printf("enter your income");
scanf("%d",&income);

if (income<=250000){
    tex=0;

}
else if(income>250000&& income>500000){
    tex =0.5*(500000-250000);
}
else if(income<500000&& income<=1000000){
tex = (500000-250000)+20*(income-500000);
}
else{
    tex=0.5*(500000-250000)+(500000-250000)+2*(income-500000);
}

printf("the total tex you need to pay is %.2f ",tex);
return 0;
}