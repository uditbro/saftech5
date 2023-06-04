// writing addition, subtraction, division and multiplication function.
#include <stdio.h>

float addition(float a, float b);
float subtraction(float d, float e);
float multiplication(float g, float h);
float division(float j, float k);

int main(){
    char ch;
    printf("Enter 'a' for addition \n");
    printf("Enter 's' for subtraction \n");
    printf("Enter 'm' for multiplication \n");
    printf("Enter 'd' for divison \n");
    printf("Enter the operator you want to execute: ");
    scanf ("%c", &ch);
    if (ch == 'a'){                                 //addition
        float a,b;
        printf("Enter the number: ");
        scanf("%f",&a);
        printf("Enter the number: ");
        scanf("%f",&b);

        float c = addition(a,b);
        printf("\n the addition of %f and %f is: %f", a,b,c);
    }
    else if (ch == 's'){                          //subtraction
        float d,e;
        printf("Enter the number: ");
        scanf("%f",&d);
        printf("Enter the number: ");
        scanf("%f",&e);

        float f = subtraction(d,e);
        printf("\n the subtraction of %f and %f is: %f", d,e,f);    
    }
    else if( ch == 'm'){                        // multiplication
        float g,h;
        printf("Enter the number: ");
        scanf("%f",&g);
        printf("Enter the number: ");
        scanf("%f",&h);

        float i = multiplication(g,h);
        printf("\n the multiplication of %f and %f is: %f", g,h,i);
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

float addition(float a, float b){
    float x= a+b;
    return x;
}
float subtraction(float d, float e){
    float y=d-e;
    return y;
}
float multiplication(float g, float h){
    float z= g*h;
    return z;
}
float division(float j, float k){
    float q=j/k;
    return q;
}
