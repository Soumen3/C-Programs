#include<stdio.h>

void main(){
    int range;
    printf("Enter the value of N:\t");
    scanf("%d", &range);

    printf("The prime numbers are:\n");
    for(int i=2; i<=range; i++){
        int flag=0;
        for (int j=2; j<i/2+1; j++){
            if (i%j==0)
                flag=1;
        }
        if(flag==0){
            printf("%d ",i);
        }
    }
    printf("\n");
}
