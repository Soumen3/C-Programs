//#include<stdio.h>
//int search(int *p, int size){
//    printf("Enter the number which you want to search:\t");
//    int n;
//    scanf("%d",&n);
//    int i;
//    for(i=0; i<size; i++){
//        if(p[i]==n)
//            return i;
//    }
//    return -1;
//}
//
//void main(){
//    int num;
//    printf("How many numbers you want to enter:\t");
//    scanf("%d",&num);
//    int arr[num];
//    printf("Enter the numbers:\n");
//    for(int i=0;i<num; i++)
//        scanf("%d",&arr[i]);
//    int index;
//    index=search(arr, num);
//    if(index>=0)
//        printf("\nThe data is found. And the index number is %d",index);
//    else{
//        printf("\nThe data is not found.....");
//    }
//}


//for practice

#include<stdio.h>
int linearSearch(int *arr, int num, int ele){
    for (int i=0; i<num; i++){
        if (arr[i]==ele)
            return i;
    }
    return -1;
}

void main(){
    printf("How many numbers you want to enter:\t");
    int num;
    scanf("%d",&num);
    int arr[num];
    printf("Enter the array element:\n");
    for (int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search:\t");
    int ele;
    scanf("%d",&ele);
    int index=linearSearch(arr,num,ele);

    if (index != -1)
        printf("The element is found.\nThe index number is %d",index);
    else
        printf("The element is not found!");
}
