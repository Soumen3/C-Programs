#include<stdio.h>

void main(){
    int low, high;
    printf("Enter the lower bound:\t");
    scanf("%d",&low);
    printf("Enter the upper bound:\t");
    scanf("%d",&high);

    int flag;
    for (int i=low; i<=high; i++){
        flag=0;
        for (int j=2; j<=i/2; j++){
            if(i%j==0){
               flag=1;
            }
        }
        if(flag==0)
            printf("%d\t",i);
    }
}
