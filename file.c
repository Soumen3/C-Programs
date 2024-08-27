#include<stdio.h>

// -------------------write in file using fputs--------------------- //

//int main(){
//    char str[20];
//    FILE *fp;
//    fp=fopen("file.txt", "a");
//    printf("Enter your name: ");
//    gets(str);
//    fputs(str, fp);
//    fclose(fp);
//    return 0;
//}




//------------- write and read in file using fwrite and fread--------------//
//
//struct book{
//    int bookId;
//    char title[20];
//    float price;
//};
//
//int main(){
//    struct book b1, b2;
//    FILE *fp;
//    fp=fopen("myFile.dat", "ab");       // data file
//    printf("Enter book id , title and price:\n");
//    scanf("%d",&b1.bookId);
//    fflush(stdin);  //clear the content of input buffer
//    gets(b1.title);
//    scanf("%f",&b1.price);
//    fwrite(&b1,sizeof(b1),1, fp);
//
//    // Reading the file's content
//    fp=fopen("myFile.dat", "rb");
//    if (fp==NULL){
//        printf("file Not Found!");
//        exit(1);
//    }
//    while(fread(&b2,sizeof(b2), 1, fp)>0){
//        printf("book id:%d\n",b2.bookId);
//        printf("Book name: %s\n",b2.title);
//        printf("price: %f\n\n",b2.price);
//    }
//
//    fclose(fp);
//}







// --------------------use of fprintf()-------------------------//

//int main(){
//    FILE *fp;
//    int a, b;
//    fp=fopen("f1.txt", "w");
//    printf("Enter two numbers:");
//    scanf("%d%d",&a,&b);
//    fprintf(fp,"Sum of %d and %d = %d", a,b,a+b);      // write the string in the file
//
//    fclose(fp);
//    return 0;
//}





// --------------------use of fscanf()-------------------------//

int main(){

    FILE *fp;
    char str[20];

    fp=fopen("file.txt", "r");
    fscanf(fp,"%s",str);
    puts(str);
    fclose(fp);
    return 0;
}
