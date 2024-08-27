#include<stdio.h>
#include<stdlib.h>

int* f1(){
    int *p;
    p = (int*)malloc(5*sizeof(int));
    *(p+0) = 10;
    *(p+1) = 20;
    *(p+2) = 30;
    *(p+3) = 40;
    *(p+4) = 50;

    return p;
}

void release(int *ptr){
    free(prt);
}

int main(){
    int *q;
    q= f1();

    release(q);

//    I've released the memory of the q pointer, now the memory block that was in consumed memory block is in free memory block.
//    If I again  release the memory of the q pointer, it will be a blander. The C compiler that is running an algorithm for memory management will crash.
//    This situation is called Double free.
//
//    release(q);

}
