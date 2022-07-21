#include<stdio.h>

int main(){
    int age;
    printf("Enter a number\n");
    scanf("%d",& age);

    if(age<=75 && age>=18){
       printf("you are above 18 and below 75 so you can drive");
    }
    else{
       printf("you cannot drive");
    }
    getch();

}
