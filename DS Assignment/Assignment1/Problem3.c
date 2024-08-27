#include<stdio.h>

void main(){
    float centigrade, fahrenheit;
    printf("Enter the temperature in Centigrade:\t");
    scanf("%f", &centigrade);

    fahrenheit= ((centigrade/5)*9)+32;
    printf("The temperature in fahrenheit is: %.2f", fahrenheit);
}
