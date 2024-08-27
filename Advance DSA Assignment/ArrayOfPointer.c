#include<stdio.h>
#include<stdlib.h>

int highestMark(int **ptr, int *size, int n){
    int mark = 0;
    for(int i = 0; i<n; i++){
        for (int j = 0; j<size[i]; j++){
            if(ptr[i][j]>mark)
                mark=ptr[i][j];
        }
    }
    return mark;
}

int main(){
    int *p[3], mark;
    int a[] = {20, 4, 75, 34, 67};
    int b[] = {54, 65, 88};
    int c[] = {53, 23, 87, 77, 67, 98, 54};
    int size[] = {5, 3, 7};
    p[0]=a;
    p[1]=b;
    p[2]=c;

    mark=highestMark(p, size, 3);
    printf("Highest mark is: %d", mark);
    return 0;
}
