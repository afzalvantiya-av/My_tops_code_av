#include<iostream>

using namespace std;

    class Playlist{
        string  playlistname;
        public:

        // This is default counstroctor it's called automatically when object is created.

        Playlist(){

           playlistname="My Favourites";

           cout<<"welcome to my playlist"<<endl;
        }

        void show(){
            cout<<"Playlistname : "<<playlistname<<endl;
        }
    };

int main(){

    Playlist p;

    p.show();

    return 0;
}