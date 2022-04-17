#include<iostream>


using namespace std;
int main()
{
    int age=19;
    int *page=&age;
    double gpa=27;
    double *pgpa=&gpa;
    string name= "mahesh";
    string *pname=&name;


    cout << "\n age :" << &age << " is " << *page;
    cout << "\n gpa :" << &gpa << "is " << *pgpa;
    cout << "\n name :" << &name << "is " << *pname;
}