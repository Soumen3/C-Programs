#include<stdio.h>
#include<string.h>

void main(){
	char com[30];
	int i=2, a=0;
	printf("\nEnter comment:\t");
    gets(com);

	if(com[0]=='/'){
		if(com[1]=='/')
			printf("\nThis is a Comment");
		else if(com[1]=='*'){
			for(i=2;i<30;i++){
				if(com[i]=='*' && com[i+1]=='/'){
					printf("\nThis is a comment\n");
					a=1;
					break;
				}
				else
					continue;
			}
			if(a==0)
				printf("\nThis is not a comment\n");
		}
		else
			printf("\nThis is not a comment\n");
	}
	else
		printf("\nThis is not a comment\n");
}
