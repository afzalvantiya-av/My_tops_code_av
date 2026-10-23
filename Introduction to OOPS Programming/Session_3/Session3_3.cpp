#include<iostream>

using namespace std;

    class Movie{
        public:

        string moviename, type;
        float rating;

        Movie(string moviename, string type, float rating){

            this->moviename=moviename;
            this->type=type;
            this->rating=rating;
        
        }

        Movie(const Movie &m){

            this->moviename=m.moviename;
            this->type=m.type;
            this->rating=m.rating;

        }

        void display(){

            cout<<"Movie name : "<<moviename<<endl;
            cout<<"Type : "<<type<<endl;
            cout<<"Rating : "<<rating<<endl;

        }
    };

int main(){

    Movie m1= Movie("Toxic", "Action Movie", 4.2);

    Movie m2= Movie(m1);

    cout<<"Before copy constructor Use : "<<endl;

    m1.display();

    cout<<"After copy constructor Use : "<<endl;

    m2.display();

    return 0;
}