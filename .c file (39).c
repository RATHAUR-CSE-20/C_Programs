#include<stdio.h>

int main(){
    float celcius,a;
    printf("Enter the value of celcius\n");
    scanf("%f", & celcius);
    printf("The value of celcius in farenheit is %f", (celcius * 9/5) + 32);

    getch();
}
