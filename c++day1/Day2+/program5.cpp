#include<iostream>
using namespace std;
int main()
{
    bool isMale=true;
    bool isTall=false;
    if(isMale&&isTall){
        cout <<"Your ara a tall male";
    }
    else if(isMale&& !isTall){
        cout << "your are short male";
    }
    else if(!isMale&& isTall){
        cout << "your are tall but not male";
    }

    else{
        cout <<"your are not male and not   tall";
    }

}