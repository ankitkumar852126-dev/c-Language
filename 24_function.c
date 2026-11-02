#include<stdio.h>
int max(int,int);
int main()
{
int num1,num2,mx;
printf("enter two number: ");
scanf("%d%d",&num1,&num2);
mx = max (num1, num2);
printf("\n max is:%d",mx);
}
int max(int n1,int n2){

    if(n1>n2){
        return n1;
    }
    
        else{
            return n2;
    }
    return 0;
}
