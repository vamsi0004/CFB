
#include<iostream>
using namespace std;

void sayHi( string name,int age)
{

    cout << "hai hello "<<name<<endl << "your are " <<age << " years old\n";
}

int main()
{
    string name ;
    int age;

    cout <<"Enter your name";
    getline(cin,name);
    cout <<"enter your age:";
    cin >>age;
    cout << "Entering into function say Hi\n";
    sayHi(name,age);
    cout << "Exited from function\n";
    return 0;
}