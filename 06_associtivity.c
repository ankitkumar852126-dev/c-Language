#include<stdio.h>
int main()
{
    int a=3;
    int b=6;
    int c=9;
    printf("the value is %d\n",a*b/c+7);
    printf("the value is  %d",3*b/2*c+7*a);
    //3*6/2*9+7*3    // first =*/5
    //18/2*9+7*3      // second= -+
    //9*9+7*3          //third  is(=)
    //81+7*3
    //81+21     
    //102
    return 0;
}