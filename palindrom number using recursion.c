#include<stdio.h>
int reverseNumber(int n, int temp)
{
	if (n == 0)
		return temp;

	temp = (temp * 10) + (n % 10);

	return reverseNumber(n / 10, temp);
}

void main(){
    int num;
    printf("Enter the number:\t");
    scanf("%d",&num);

    int reverse=reverseNumber(num,0);
    printf("the reverse number is:\t%d",reverse);

    if(num==reverse)
        printf("\nThe number is palindrome");
    else
        printf("\nThe number is not palindrome");

}
