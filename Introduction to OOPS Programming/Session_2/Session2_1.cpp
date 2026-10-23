#include<iostream>

using namespace  std;

    class Playlist{
        public:
        string name;
        int createdOn;
        bool isPublic=false;

        void make(){
            isPublic = true;
        }

        void call(){
            cout<<"Name: "<<name<<endl;
            cout<<"Create On: "<<createdOn<<endl;
            cout<<"isPublic: "<<(isPublic ? "True" : "False")<<endl;
        }
    };

int main(){

    Playlist a;
    
    a.name="Arjit singh";
    a.createdOn=23;

    //a.make();

    a.call();

    return 0;
}