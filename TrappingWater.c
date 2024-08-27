#include<stdio.h>
int max(int arr[], int start, int end){
    int temp=arr[start];
    for(int i=start+1; i<end; i++){
        if (arr[i]>temp)
            temp=arr[i];
    }
    return temp;
}

int minimum(int num1, int num2){
    if(num1<num2)
        return num1;
    else
        return num2;
}

int trapWater(int arr[], int n){
    int units, lmax, rmax;
    int totalWater=0;
    for (int i=1; i<n-1; i++){
        lmax=max(arr, 0, i);
        rmax=max(arr, i, n);
        units= minimum(lmax, rmax);
        if(arr[i] < units){
            totalWater=totalWater+(units-arr[i]);
        }
    }
    return totalWater;
}



void main(){
    int arr[]={3,2,1,5,0,2,0};
    int numberOfBuildings= sizeof(arr)/sizeof(int);
    int totalWater=trapWater(arr, numberOfBuildings);
    printf("The total water can store %d unit", totalWater);
//    printf("%d",numberOfBuildings);
}
