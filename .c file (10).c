#include<stdio.h>

int main(){
    int num;
    printf("Enter your number\n");
    scanf("%d",& num);

    if(num==1){
       printf("your number is one\n");
    }
    if(num==2){
        printf("your number is two\n");
    }

      if(num==3){
        printf("your number is three\n");
    }

      if(num==4){
        printf("your number is four\n");
    }
    else{
       printf("its not 1,2,3 or 4\n");
    }
    getch();
}
