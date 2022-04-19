#include<iostream>
using namespace std;
class Movie{
private:
    string rating;

public:
    string title;
    string director;
    Movie(string atitle,string adirector,string arating){
        title= atitle;
        director=adirector;
        setrating(arating);
    }
    void setrating (string arating){
        if(arating=="G" || arating =="PG" || arating =="PG-13" || arating=="R"  || arating== "NR")
        {

            rating=arating;
        }
        else{
            rating="NR";
        }
    }

    string getrating(){
        return rating;
    }

};
int main()
{
    Movie avengers("The Avengers","Joss whedon","PG-15");
    avengers.setrating("Dog");
    cout << avengers.getrating();

}
