#include<stdio.h>

int main(){
    int age;
    printf("Enter a number\n");
    scanf("%d",& age);

    if(age==100){
       printf("Century");
    }
    else{
       printf("Not exist as Century");
    }
    getch();

}
