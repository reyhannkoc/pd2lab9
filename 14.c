#include <stdio.h>
#include <string.h>

struct books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
// fonk decleratian
void printbook(struct books book);  

int main()
{
    struct books book1;
    struct books book2;

    // book1 specification
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Nuha Ali");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 6495407;
    
    // book1 specification
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Zara Ali");
    strcpy(book2.subject, "Telecom Billing Tutorial");
    book2.book_id = 6495700;

    // print book1 info
    printbook(book1);

    // print book2 info
    printbook(book2);
    return 0;

}

void printbook(struct books book)
{
    printf("book title: %s\n", book.title);
    printf( "book author: %s\n",book.author);
    printf( "book subject: %s\n",book.subject);
    printf("book book id: %d\n",book.book_id);

}