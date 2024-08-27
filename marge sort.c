 #include<stdio.h>

void marge(int arr[], int beg, int mid, int end){
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;

    int leftArray[n1];
    int rightArray[n2];

    for(int e=0; e<n1; e++){
        leftArray[e]=arr[beg+e];
    }
    for(int e=0; e<n2; e++){
        rightArray[e]=arr[mid+1+e];
    }

    i=0;
    j=0;
    k=beg;

    while(i<n1 && j<n2){
        if(leftArray[i]<= rightArray[j]){
            arr[k]=leftArray[i];
            i++;
        }
        else{
            arr[k]=rightArray[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=leftArray[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=rightArray[j];
        j++;
        k++;
    }
}
void marge_sort(int arr[], int beg, int end){
    if(beg!=end){
        int mid=(beg+end)/2;
        marge_sort(arr,beg,mid);
        marge_sort(arr,mid+1,end);
        marge(arr, beg, mid, end);
    }
}
void main(){
    printf("enter the number of element you want:\t");
    int num;
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements:\n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nYou have enter:\n");
    for(int i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }
    marge_sort(arr, 0, num-1);
    printf("\nAfter sorting the array:\n");
    for(int i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }



}

