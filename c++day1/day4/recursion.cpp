#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0 || n==0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }

}


int main(){
    int num,result;
    cout << "enter a number : ";
    cin >>num;
    result=factorial(num);
    cout <<" the factorial of a number is "<<result;5

    return 0;
}
