#include<iostream>
using namespace std;
 class Book{
    public:
    string title;
    string author;
    int pages;
    Book()
    {
        title ="no title";
        author ="no author";
        pages= 0;
    }

    Book(string aTitle,string aAuthor,int aPages){
        title=aTitle;
        author = aAuthor;
        pages=aPages;
    }
 };
 int main()
 {
    Book book1("Harry potter","JK rowling",500);

    Book book2("Lord of the rings","tolkein",700);
    Book book3;
    cout << book3.title;
 }
