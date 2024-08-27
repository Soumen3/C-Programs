#include<stdio.h>
int fibo(int n){
    int f[n+2];
    f[0]=0;
    f[1]=1;
    for(int i=2; i<=n; i++){
         f[i]=f[i-1]+f[i-2];
    }
    return f[n];


}
int main(){
    printf("How many numbers do you want to print:\t");
    int num;
    scanf("%d",&num);
    printf("The series is:\n");
    for(int i=0; i<num; i++){
        printf("%d ",fibo(i));
    }

}
