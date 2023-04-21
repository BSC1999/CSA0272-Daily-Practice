#include<stdio.h>
struct book
{
char title[40];
char publications[40];
char author[40];
};
int main()
{
struct book book1;
printf("Enter Book title: ");
gets(book1.title);
printf("Enter Book author:");
scanf("%d", &book1.author);
printf("Enter Book publications:");
scanf("%f", &book1.publications);

printf("\nBook using simple structure variable.\n");
printf("Book Title: %s\n", book1.title);
printf("Book Pages: %d\n", book1.author);
printf("Book Price: %f\n", book1.publications);
}


