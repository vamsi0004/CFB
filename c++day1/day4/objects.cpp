#include<iostream>
using namespace std;
class Student{
public:
    string name;
    string major;
    double gpa;
    Student(string aname,string amajor,double agpa)
    {
        name=aname;
        major=amajor;
        gpa=agpa;
    }
    bool hashonors(){
        if(gpa>=2.0)
        {
            return true;
        }
        return false;
    }


};
int main()
{
    Student student1("jim","Bussiness",2.4);
    Student student2("pam","Art",3.6);
    cout <<student2.hashonors();


    return 0;

}
