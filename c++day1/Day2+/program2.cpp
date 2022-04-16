#include<iostream>
using namespace std;
int main()
{
    int luckynums[]={1,3,4};
    for(int i=0;i<10;i++)
    {

        cin >>luckynums[i];
    }
    for(int i=0;i<5;i++)
        cout << " numbers are : "<<luckynums[i]<<endl;

}