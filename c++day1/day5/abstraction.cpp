#include<iostream>
using std::string;
class Abstractemployee{
    virtual void Askforpromotion()=0;
};


 class Employee:Abstractemployee{
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
     void Askforpromotion(){
        if(age>30)
            std::cout<<name << " is got promoted" <<std::endl;
        else
            std::cout <<name << " is not eligible for promotion" <<std::endl;
     }
};

int main()
{
    Employee emp1=Employee("vamsi", "cfb",20);
    Employee emp2=Employee("bharani", "accenture",22);
    emp1.Askforpromotion();
    emp2.Askforpromotion();
    return 0;
}
