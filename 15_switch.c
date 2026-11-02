#include<stdio.h>
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);


    switch(a){
        case 1:
              printf("you enter 1\n");
              break;
        case 2:
              printf("you enter 2\n");
              break;
        case 3:
             printf("you enrer 3\n");
             break;
        case 4:
             printf("you enter 4\n");
             break;
             default:
             printf("Nothing matched");

    }
    return 0;
}                                                                                                            