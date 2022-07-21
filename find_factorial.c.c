#include<stdio.h>

int factorialItertative(int n){
    int val = 1;
    for ( int i = n; i >1; i--)
    {
        val *=i;

    }
    return val;

}
int main(){
     int n,final;
     printf("Enter that number of which you want to find factorial\n");
     scanf("%d",&n);
     int factorial = factorialItertative(n);
     printf("The value of factorial is %d\n",factorial);
     printf("Thanks for finding factorial you can give me feedback on 9264103228 via whatsap\n");
     scanf("%d",& final);
     getch();




}
