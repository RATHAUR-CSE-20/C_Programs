#include<stdio.h>

int main(){
    float radius,height;
    float pi=3.14;
    float a=1/3;
    printf("Enter the value of radius\n");
    scanf("%f",& radius);

    printf("Enter the value of height\n");
    scanf("%f",& height);

    printf("the area of your cone is %f",a *pi * radius * radius * height);
    getch();
}
