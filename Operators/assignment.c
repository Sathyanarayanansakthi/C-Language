#include<stdio.h>

int main(){
    printf("This is assignment Operator \n");

    int a =5;
    int b=6;

    int c=a+=3;
    printf("%d\n",c);

    int d=b-=1;
    printf("%d\n",d);

    int e=a*=5;
    printf("%d\n",e);

    int f=b/=3;
    printf("%d\n",f);

    int g=b%=1;
    printf("%d\n",g);

}