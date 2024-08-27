#include<stdio.h>
void swap(float *p, float *q){
    float t=*p;
    *p=*q;
    *q=t;
}

void main(){
    //float  *p, *q;
    float  a,b;

    printf("Enter the value of a and b:\n");
    scanf("%f%f",&a,&b);

    printf("Before swapping:\n");
    printf("a = %.1f\nb = %.1f",a,b);

    //p=&a;
    //q=&b;

    swap(&a,&b);

    printf("\nAfter swapping:\n");
    printf("a = %.1f\nb = %.1f",a,b);


}
