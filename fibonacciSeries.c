//#include<stdio.h>
//void fibo_series(int n){
//    int first=0;
//    int second=1;
//
//    for (int i=0; i<n; i++){
//        printf("%d ",first);
//        int r=first+second;
//        first=second;
//        second=r;
//    }
//}
//
//void main(){
//    int n;
//    printf("Enter how many number you want to print:\t");
//    scanf("%d",&n);
//    printf("The series is:\t");
//    fibo_series(n);
//}




//for practice

#include<stdio.h>
void fibo(int);
void main(){
    int n;
    printf("How many numbers you want to print:\t");
    scanf("%d",&n);
    printf("The series is:\n");
    fibo(n);
}

void fibo(int n){
    int first=0,second=1,r;

    for(int i=0; i<n; i++){
        printf("%d ",first);
        r=first+second;
        first=second;
        second=r;

    }
}
