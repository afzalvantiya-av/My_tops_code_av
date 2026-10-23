#include<iostream>

using namespace std;

    class Song{
        
        string title;
        string artist;

        public:

        void settitle(string title){
            this->title=title;
        }

        void setartist(string artist){
            this->artist=artist;
        }

        string gettitle(){
            return title;
        }

        string getartist(){
            return artist;
        }
    };

int main(){

    Song s1;

    s1.settitle("kesariya");
    s1.gettitle();

    s1.setartist("Arjit singh");
    s1.getartist();

    cout<<"Original Title : "<<s1.gettitle()<<endl;
    cout<<"Artist : "<<s1.getartist()<<endl;

    s1.settitle("Tere ishq me");

    cout<<"Updated Title : "<<s1.gettitle()<<endl;

    return 0;
}