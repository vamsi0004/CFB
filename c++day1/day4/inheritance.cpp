#include<iostream>

using namespace std;

class Chef
{
    public:
        void makechicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makesalad(){
            cout << "The chef makes salad" << endl;
        }
        void makespecialdish(){
            cout << "The chef makes bbq ribs" << endl;
        }

};


class Italianchef :public  Chef{
    void makepasta(){
        cout <<"The chef makes pasta" << endl;
    }



};

int main()
{
    Chef chef;
    chef.makechicken();
    italianchef.makepasta();

    Italianchef italianchef;
    italianchef.makechicken();

    return 0;
}
