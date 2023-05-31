// writing addition, subtraction, division and multiplication function.
#include <stdio.h>

int addition(int a, int b);
int subtraction(int d, int e);
int multiplication(int g, int h);
float division(float j, float k);

int main(){
    char ch;
    printf("Enter the operator you want to execute: \n");
    printf("Enter 'a' for addition \n");
    printf("Enter 's' for subtraction \n");
    printf("Enter 'm' for multiplication \n");
    printf("Enter 'd' for divison \n");
    scanf ("%c", &ch);
    if (ch == 'a'){                                 //addition
        int a,b;
        printf("Enter the number: ");
        scanf("%d",&a);
        printf("Enter the number: ");
        scanf("%d",&b);

        int c = addition(a,b);
        printf("\n the addition of %d and %d is: %d", a,b,c);
    }
    else if (ch == 's'){                          //subtraction
        int d,e;
        printf("Enter the number: ");
        scanf("%d",&d);
        printf("Enter the number: ");
        scanf("%d",&e);

        int f = subtraction(d,e);
        printf("\n the subtraction of %d and %d is: %d", d,e,f);    
    }
    else if( ch == 'm'){                        // multiplication
        int g,h;
        printf("Enter the number: ");
        scanf("%d",&g);
        printf("Enter the number: ");
        scanf("%d",&h);

        int i = multiplication(g,h);
        printf("\n the multiplication of %d and %d is: %d", g,h,i);
    }
    else if (ch == 'd'){                       // division
        float j,k;
        printf("Enter the number: ");
        scanf("%f",&j);
        printf("Enter the number: ");
        scanf("%f",&k);

        float l = division(j,k);
        printf("\n the division of %f and %f is: %f", j,k,l);
    }
    else{
        printf("Enter a defined operator name ");
    }

return 0;
    
}

int addition(int a, int b){
    int x= a+b;
    return x;
}
int subtraction(int d, int e){
    int y=d-e;
    return y;
}
int multiplication(int g, int h){
    int z= g*h;
    return z;
}
float division(float j, float k){
    float q=j/k;
    return q;
}