#include<iostream>
using std::string;
class Employee{
public:
    string name;
    string company;
    int age;
    void introdueyourself(){
         std::cout << "name -"<<name <<std::endl;
         std::cout <<"company -"<<company <<std::endl;
         std::cout <<"age -"<<age<<std::endl;
    }
    public:
    Employee(string n,string company,int age){
        name=n;
        company=comp;
        age=a;
    }
};

int main()
{
    int number;
    Employee emp1;
    emp1.name="mahesh";
    emp1.company="cfb";
    emp1.age=20;
    emp1.introdueyourself();

    Employee emp2;
    emp2.name="bharani";
    emp2.company="hcl";
    emp2.age=22;
    emp2.introdueyourself();

}
