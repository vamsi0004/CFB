#include<iostream>
using namespace std;

string getday(int daynum)
{
    string dayname;
    switch(daynum)
    {

        case 1:
            dayname= "monday";
            break;
        case 2:
            dayname= "tueday";
            break;
        case 3:
            dayname= "wednesday";
            break;
        case 4:
            dayname="thursday";
            break;
        case 5:
            dayname= "friday";
            break;
        case 6:
            dayname= "saturday";
            break;
        case 0:
            dayname= "sunday";
            break;

        return dayname;
    }

}


int main()
{
    int daynum;
    cout << "Enter number : ";
    cin >> daynum;
    cout <<getday(daynum);


}