#include<stdio.h>

int main(){
    int math, physics, chemistry, final;
    float total;
    printf("enter the marks of physics\n");
    scanf("%d", &physics);
    printf("enter the marks of math\n");
    scanf("%d", &math);
    printf("enter the marks of chemistry\n");
    scanf("%d", &chemistry);
    total=(math+physics+chemistry)/3;
    (total<40|| physics<33||math<33||chemistry<33) ? printf("your total percentage is %f percent and you failed\n", total) : printf("your total percentage is %f percent and you passed\n", total);
    printf("Thanks for using my programme yo can give me feedback via whatsap 9264103228 \n");
    scanf("%d", final);
    return 0;

}
