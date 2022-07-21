#include<stdio.h>

int main(){
    float mass,accelaration;
    printf("Enter the value of mass in kg\n");
    scanf("%f",& mass);

    printf("Enter the value of accelaration in m/s^2\n");
    scanf("%f",& accelaration);

    printf("the value of force in Newton is %f",mass * accelaration );
    getch();
}
