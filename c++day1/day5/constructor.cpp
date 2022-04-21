
#include<iostream>
using std::string;
class Employee{
public:
    string name;
    string company;
    int age;

    public:
    Employee(string n,string comp,int a){
        name=n;
        company=comp;
        age=a;
        std::cout << "name -"<<name <<std::endl;
        std::cout <<"company -"<<company <<std::endl;
        std::cout <<"age -"<<age<<std::endl;
    }
};

int main()
{
    Employee emp1=Employee("vamsi", "cfb",20);

    Employee emp2=Employee("bharani", "accenture",22);


}
