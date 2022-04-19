#include<iostream>
using namespace std;

class Add{
    public:
    int x,y;
    Add(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void display()
    {
        cout << "sum =" << x+y;
    }
};


int main()
{
    int x,y;
    cout <<"enter X and Y values : ";
    cin >>x >>y;
    Add a=Add(x,y);
    a.display();
    return 0;
}
