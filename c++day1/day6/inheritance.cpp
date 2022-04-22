
#include<iostream>
using std::string;
class Abstractemployee{
    virtual void Askforpromotion()=0;
};


 class Employee:Abstractemployee{
private:
    string company;
    int age;
protected:
    string name;
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

class Developer:public Employee{
    public:
        string favprogramming;
        Developer(string n,string comp,int a,string favp)
            :Employee(n,comp,a)
        {
            favprogramming=favp;
        }
        void fixbug()
        {
            std::cout <<name << " fixed bug using c++ " <<std::endl;

        }

};

class Teacher :public Employee{
    string sub;
    void preparelesson(){
        std::cout <<getname() << "is preparing " <<sub << "lesson " <<std::endl;
    }
    Teacher(string n,string comp,int a,string s)
    :Employee(n,comp,a)
    {
     sub=s;
    }

};


int main()
{
    Developer d=Developer("vamsi", "cfb",20,"c++");
    /*d.fixbug();
    d.Askforpromotion*/
    Teacher t=Teacher("bharani","hcl",30,"java");
    t.preparelesson();
    d.Askforpromotion

    return 0;
}
