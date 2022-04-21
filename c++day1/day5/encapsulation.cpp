#include<iostream>
using std::string;
class Employee{
private:
    string name;
    string company;
    int age;
    public:
    void setname(string n){             //setter
        name=n;
    }
    string getname(){                   //getter
        return name;
    }
    void setcompany(string com){
        company=com;
    }
    string getcompany(){
        return company;
    }
    void setage(int a){
        age=a;
    }
    int getage(){
        return age;
    }

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
    Employee emp1=Employee("mahesh", "cfb",20);

    Employee emp2=Employee("mahi", "accenture",22);
    emp1.setage(20);
    std::cout<<emp1.getname() << " is " << emp1.getage() << " old";


}
