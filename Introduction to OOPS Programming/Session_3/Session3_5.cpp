#include <iostream>
#include <string>

using namespace std;

    class Playlist{
        public:
        string playlistName="My Favourites";

        void display(){

            cout<<"Playlist: "<<playlistName<<endl;
        }

        ~Playlist(){

            cout<<"Playlist auto-saved: "<<playlistName<<endl;
        }
    };

int main(){

    Playlist p;
    
    p.display();

    return 0;
}