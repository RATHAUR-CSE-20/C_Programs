
#include<stdio.h>

int main(){
    int age;
    printf("Enter a number\n");
    scanf("%d",& age);

    if(age < 18){
       printf("you cannot get driving licence ");
    }
    else{
       printf("you can get driving licence");
    }
    getch();

}
