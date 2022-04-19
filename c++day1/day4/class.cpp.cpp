#include<iostream>

using namespace std;

class Book {
public:
    string title;
    string author;
    int pages;


};


int main()
{
    Book book1;
    book1.title= "harry potter ";
    book1.author="JK rowling";
    book1.pages=500;

    Book book2;
    book2.title= "lord of rings ";
    book2.author="tolkein";
    book2.pages=700;

    cout <<book2.author;



    return 0;
}
