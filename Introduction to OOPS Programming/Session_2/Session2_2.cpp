#include<iostream>

using namespace  std;

    class Playlist{
        
        public:
        string title="Playlist1";
        bool isPublic=false;

        void togglePublic(){
            isPublic=true;
        }

        void show(){

            cout<<"Playlist: "<<title<<endl;
            cout<<"Public: "<<(isPublic ? "True" : "False")<<endl;
        }
    };

int main(){

    Playlist p;

    cout<<"Before Toggle fun called: "<<endl;
    p.show();

    cout<<"After Toggle fun called: "<<endl;
    p.togglePublic();
    p.show();

    return 0;
}