#include<iostream>
#include<cstring>

using namespace std;

void printBook(struct Books *book);

struct Books;
{

 char title[50];
 char author[50];
 char subject[100];
 int book_id;
};

int main()
{
struct Books Book1;
struct Books Book2;

//Book1

strcpy(Book1.title,"Learn C++ Programming");
strcpy(Book1.author,"Victor Leunti");
strcpy(Book1.subject,"C++ programming");
       Book1.book_id=1;

//Book1

strcpy(Book2.title,"Learn Python");
strcpy(Book2.author,"H Z");
strcpy(Book2.subject,"Python");
       Book2.book_id=2;

printBook( &Book1 );
printBook( &Book2 );

return 0;
}

void printBook(struct Books *book)
{

 cout<<"Book title: " << book->title<<endl;
 cout<<"Book author: " << book->author<<endl;
 cout<<"Book subject: " << book->subject<<endl;
 cout<<"Book id: " << book->book_id<<endl;
}
