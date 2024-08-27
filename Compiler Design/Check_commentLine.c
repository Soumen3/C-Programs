#include<stdio.h>
#include<conio.h>

void main(){
    char com[30];
    int i,a=0;
    printf("\n Enter Comment:\t");
    gets(com);

    if(com[0]=='/'){
        if(com[1]=='/'){
            printf("This is a comment");
        }
        else if(com[1]=='*'){
            for(i=2; i<=30; i++){
                if (com[i]=='*' && com[i+1]=='/'){
                    printf("It is a comment");
                    a=1;
                    break;
                }
                else
                    continue;
            }
            if (a==0)
                printf("\nIt is not a comment");
        }
        else
            printf("\nIt is not a comment");
    }
    else
        printf("\nIt is not a comment");
}
