// use of userdefined function in c to add two numbers.

#include <stdio.h>

int sum (int a, int b);

int main(){
    int a,b;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    int s = sum (a,b);
    printf("sum is %d \n",s);
    return 0;
}

int sum (int a, int b){
    return a+b;
    }


