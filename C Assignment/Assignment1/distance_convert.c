#include<stdio.h>

void main(){
    float km, meter, feet, inch;
    printf("enter the distance in km: ");
    scanf("%f",&km);
    printf("The distance in meter is %.2f\n", km*1000);
    printf("The distance in feet is %.2f\n", km*3280.84);
    printf("The distance in inch is %.2f\n", km*39370.08);
}
