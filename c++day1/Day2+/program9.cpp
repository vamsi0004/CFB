#include<iostream>
 using namespace std;
 int main()
 {

     int secretnum = 10;
     int guess;
     int guesscount = 0;
     int guesslimit=5;
     bool outofguess=false;
     while(secretnum !=guess && !outofguess){
        if(guesscount<= guesslimit){
            cout <<"Enter number : ";
            cin >> guess;
            guesscount++;
            if(secretnum!= guess){
                cout <<"take one more chance and ";
            }
        }
        else {
            outofguess=true;
        }
     }
     if(outofguess){
        cout << "you lose";
     }
     else{
        cout <<" congratulations You win";
     }

 }