#include<iostream>

using namespace std;

    class Playlist{
        public:
        string songs[10];
        int count=0;

        void addSong(string songtitle){
            songs[count] = songtitle;
            count++;

        }

        void display(){
            cout<<"My Playlist:"<<endl;

            for(int i=0;i<count;i++){

                cout<<i+1 <<". "<<songs[i]<< endl;

            }
        }
    };

int main(){

    Playlist p;

    p.addSong("Kesariya");
    p.addSong("Tum hi ho");
    p.addSong("saiyaara");

    p.display();

    return 0;
}