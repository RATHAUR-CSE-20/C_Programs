#include<stdio.h>

int main(){
      int age;

      printf("Enter your age\n");
      scanf("%d",& age);

      (age<18)?printf("you have not right to vote in election"):printf("you have right to vote in election");
      getch();


}
