#include <stdio.h>
#include <string.h>

struct books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

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

    // book1 info
    printf("book 1 title: %s\n", book1.title);
    printf( "book 1 author: %s\n",book1.author);
    printf( "book 1 subject: %s\n",book1.subject);
    printf("book 1 book id: %d\n",book1.book_id);

    

    ///book1 info
    printf("book 2 title: %s\n", book2.title);
    printf( "book 2 author: %s\n",book2.author);
    printf( "book 2 subject: %s\n",book2.subject);
    printf("book 2 book id: %d\n",book2.book_id);

    
    return 0;


    
}