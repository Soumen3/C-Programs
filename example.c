#include<stdio.h>
void main(){
    int i=1;
    for(;;){
        printf("%d",i++);
        if(i>5)
            break;
    }
    int j=5;
    printf(j+"good morning");
}
