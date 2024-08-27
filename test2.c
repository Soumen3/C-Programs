//#include <stdio.h>
// #define I char
// union School{
//     int age, rollno;
//     double marks;
// };
// void solve(){
//     union School sc;
//     // sc.age=19;
//     sc.rollno=82;
//     sc.marks=19.8657;
//     printf("%d\n",(int)sizeof(sc));
//     printf("%d\n",sc.rollno);
//     printf("%d\n",sc.age);
//     printf("%f\n",sc.marks);

// }
// int main(){
//     solve();
//     return 0;

// int x=10;
// if(x=5){
//     printf("%d",x);
// }
// else{
//     printf("%d",x+1);
// }
// printf("%d",x);
// return 0;

// const int a=4;
// float b;
// b=++a;
// printf("%d %f",a, ++b);

// I i=65;
// printf("sizeof(i)=%d",sizeof(i));

// }
// void main(){
//     int i=1;
//     if(i++ &&(i==1))
//         printf("yes");
//     else
//         printf("no");
// }

// void main(){
//     int a=1, b=3, c=2;
//     if(a>b)
//         if (b>c)
//             printf("a>b and b>c");
//     else
//         printf("Something else");

// }

// void main(){
//     int x=0, y=0;
//     if (x&&y++)
//         printf("%d...%d",x++, y);
//     printf("%d...%d",x,y);
// }

// enum colors{BLACK, BLUE, CYAN};
// void main(){
//     printf("%d..%d..%d",BLACK, BLUE, CYAN);
// }

// void main(){
//     char xy=0;
//     for(;xy>0;xy++);
//     printf("%d\n",xy);
// }

// void main(){
//     int *j;
//     {
//         int i=1000;
//         j=&i;
//     }
//     printf("%d",*j);
// }

//void main()
//{
//    int a = 5;
//    int b = ++a + a++ + ++a;
//    printf("%d",b);
//}

//void main(){
//    int x = 3;
//    int y= ++x*(x++ - --x)/x--;
//    printf("%d",y);
//}

//void main(){
//    int x = 2;
//    int y= x++ + ++x - x-- + --x;
//    printf("%d",y);
//}

//void main(){
//    int x = 2;
//    int y= x++ * ++x/--x;
//    printf("%d",y);
//}

//void main()
//{
//	char xy=0;
//	for(;xy>0;xy++);
//	printf("%d\n",xy);
//}
//

//
//int main()
//{
//    while  ()
//        printf("In while loop ");
//    printf("After loop\n");
//}


//int main(){
//    int a=1;
//    int b=2;
//    int c= a++ + ++b;
//    printf("%d %d %d", a,b,c);
//    return 0;
//}

//
//int main(){
//    char count='a';
//    while(count>='a' && count<='z'){
//        printf("%d ",count);
//        count++;
//    }
//
//
//}


//
//int main(){
//    int a=2, b=3, c=4;
//    printf("%d",a += b *= c);
//}


//
//int main(){
//    int fruit=2;
//    switch (fruit+3){
//        default: printf("mango ");
//        case 1: printf("Apple ");
//        case 2: printf("Graps ");
//        case 3: printf("banana ");
//        case 4: printf("litchi ");
//    }
//}

//
//void main(){
//    char s[5];
//    fgets(s, sizeof(s), stdin);
//    int i=0;
//    printf("%c",s[4]);
//
//    while (s[i]!='\0')
//        i++;
//    printf("\n%d",i);
//}




//int main() {
//    int num, i=0, j;
//    printf("Enter a 5-digit number: ");
//    scanf("%d", &num);
//    int Divider=100000;
//    while (i<5){
//        printf("%d\n",num%Divider);
//        Divider/=10;
//        i++;
//
//    }
//    return 0;
//}








#include<stdio.h>
#include<conio.h>

void main(){
    printf("Enter how many number you want to enter: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result =0;
    for(int i=0; i<n; i++)
    {
        result = result + arr[i];
    }
    printf("The adition of the numbers is: %d",result);
}



















