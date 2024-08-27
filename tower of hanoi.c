#include<stdio.h>
void tower(int n, char source, char aux, char destination){
    if (n==1){
        printf("Move the 1 no. disk from %c to %c\n",source,destination);
    }
    else{
        tower(n-1,source,destination,aux);
        printf("Move the %d no. disk from %c to %c\n",n,source,destination);
        tower(n-1,aux,source,destination);
    }
}
void main(){
    int num;
    printf("Enter the number of disk:\t");
    scanf("%d",&num);
    tower(num,'A','C','B');
}
