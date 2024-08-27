/*
#include <stdio.h>
int main (void){
    char p;
    char buf [10] = {1,3,4,6,3,7,8,5,4};
    p = (buf + 1) [5] ;
    printf("%d",p);
    return 0 ;
}
*/


/*
#include<stdio.h>
    void main ( ){
    int a[3][4]={1,2,3,4,4,3,2,1,7,8,9,0};

    printf("%d\n",(a+1)[0][0]);
    printf("%u %u\n", a, &a+1);
}
*/

/*
 #include<stdio.h>
 #include<string.h>
 void main(){
    char str[]="C EXAMINATION", rev[17];
    int j=0;
    for(int i=strlen(str); i>=0; rev[j++]=str[i--]){    //the null ("\0") value will assign first in the rev[] array
        rev[j]=str[j];
    }
    printf("%s",rev);           //nothing will print because the first element of the string is null.


 }
 */

 /*
 #include<stdio.h>
 void main(){
    int x=2, *a[4];
    //a=&x;
    printf("%d\n",&a);
    printf("%d",a);
 }
*/
/*
#include<stdio.h>
int sum(x){
    if(x!=0){
        return x+ sum(x-1);
    }
    else
        return x;
}
int main(){
    printf("%d",sum(10));
}
*/
#include<stdio.h>
/*
#define I char
void main(){
    I i =65;
    printf("sizeof(i)=%d",sizeof(i));
}
*/
/*
void main(){
    int x=0, y=0;
    if(x&&++y)
       printf("%d  %d",x++,y);
    printf("%d       %d",x,y);

}*/
/*
enum color{BLACK, BLUE, CYAN};
void main(){
    printf("%d   %d   %d",BLACK,BLUE,CYAN);
}
*/
void main(){
    int *j;
    {

    int i=1000;
    j=&i;
    }
    printf("%d",*j);
}

















