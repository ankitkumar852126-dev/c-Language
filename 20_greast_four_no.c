#include<stdio.h>
int main()
{
    int a=12,b=24,c=244,d=467;
    
    if(a>b&&a>c&&a>d){
        printf("greater  number is %d",a);
    }
else if (b>a&& b>c&&b>d){
    printf("greater number is %d",b);
}
else if (c>a&&c>b&&c>d){
    printf("greater number is %d",c);
}
    else if (d>a&&d>b&&d>c){
    printf("greater number is %d",d);
}
return 0;
}