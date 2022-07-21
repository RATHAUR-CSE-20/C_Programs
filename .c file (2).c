#include<stdio.h>

int main(){
    float radius;
    float pi=3.14;
    printf("Enter the value of radius\n");
    scanf("%f",& radius);

    printf("the area of your circle is %f",pi * radius * radius);
    getch();
}
