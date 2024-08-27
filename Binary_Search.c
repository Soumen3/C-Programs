//#include<stdio.h>
//
//int search(int *p, int size){
//    printf("\nEnter the number which you want to search:");
//    int n;
//    scanf("%d",&n);
//    int low=0, mid, high=size-1;
//    while(low<=high){
//        mid=(low+high)/2;
//        if(n==p[mid]){
//            return mid;
//        }
//        else if(n<p[mid]){
//            high=mid-1;
//        }
//        else{
//            low=mid+1;
//        }
//    }
//    return -1;
//}
//
//void Asc_sort(int *arr, int num) {
//    for(int i=0; i<num; i++) {
//        for(int j=i+1; j<num; j++) {
//            if(arr[j]<arr[i]) {
//                arr[i]=arr[j]+arr[i];
//                arr[j]=arr[i]-arr[j];
//                arr[i]=arr[i]-arr[j];
//            }
//        }
//    }
//}
//
//
//void main(){
//    printf("How many numbers you want to enter:\t");
//    int num;
//    scanf("%d",&num);
//    int arr[num];
//    printf("Enter the values:\n");
//    for(int i=0; i<num; i++)
//        scanf("%d",&arr[i]);
//    Asc_sort(arr,num);
//    printf("\nThe array is sorted\n");
//    printf("After sorting the array:\n");
//    for(int i=0; i<num; i++)
//        printf("%d ",arr[i]);
//    int index=search(arr, num);
//    if(index>=0){
//        printf("The number is found. And the index number is %d",index);
//    }
//    else{
//        printf("The number is not found....");
//    }
//}





//for practice

#include<stdio.h>

void sort(int*, int);
void swap(int*, int*);
int search (int*, int);

void main(){
    int num;
    printf("HOw many number you want to enter:\t");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:\n");
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }

    sort(arr,num);
    printf("\nThe array is sorted.")
//    for(int i=0; i<num; i++){
//        printf("%d ",arr[i]);
//    }
    int index=search(arr,num);

    if(index>=0)
        printf("\nThe element is found.\nThe index number is %d",index);
    else
        printf("\nThe element is not found");

}

void sort(int *arr, int num){
    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            if (arr[i]>arr[j])
                swap(&arr[i],&arr[j]);
        }
    }
}

void swap(int *ele1, int *ele2){
    int temp= *ele1;
    *ele1=*ele2;
    *ele2=temp;
}

int search(int *arr, int num){
    int ele;
    printf("Enter the element you want to search:\t");
    scanf("%d",&ele);
    int high=num, low=0, mid;
    while(high>=low){
        mid=(high+low)/2;
        if(arr[mid]==ele)
            return mid;
        else if(ele<arr[mid]){
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return -1;


}
