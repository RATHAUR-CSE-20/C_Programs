#include<stdio.h>

int main(){
    float radius,height;
    float pi=3.14;
    printf("Enter the value of radius\n");
    scanf("%f",& radius);

    printf("Enter the value of height\n");
    scanf("%f",& height);

    printf("the volume of your cylinder is %f",pi * radius * radius * height);
    getch();
}
