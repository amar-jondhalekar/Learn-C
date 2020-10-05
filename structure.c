#include<stdio.h>
#include<string.h>
struct Books{
    char name[50];
    char author[50];
    int price;
}book;
void printStruct(struct Books bk1)
{
   printf("The name of Book:%s\n", bk1.name);
   printf("The name of Author:%s\n", bk1.author);
   printf("The Price of Book:%d\n", bk1.price);

}
    
int main(){
       struct Books bk1, bk2;
       strcpy(bk1.name, "C PROGRAMMING");
       strcpy(bk1.author, "Dennis Rechie");
       bk1.price = 200;
       printStruct(bk1);
       return 0;
}