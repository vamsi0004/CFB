#include<iostream>
using namespace std;

int power(int bnum,int pnum)
{
    int result=1;
    for(int i=0;i<pnum;i++)
    {
        result=result*bnum;
    }
    return result;

}

int main()
{
    //int base,pow;
    //cout << "enter base and power : ";
    ////cin >>base;
    //cin >>pow;
     cout << power(2,2);


}