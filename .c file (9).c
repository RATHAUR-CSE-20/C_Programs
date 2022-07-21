#include<stdio.h>

int main(){
    float a;
    printf("Enter a\n");
    scanf("%f", &a);
    (a < 100) ? printf("A is less than 100");(a == 100) ? printf("A is equal to 100"); : printf("A is greater than 100");
     getch();
}
