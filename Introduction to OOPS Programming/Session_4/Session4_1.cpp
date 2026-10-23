#include<iostream>

using namespace std;

    class SocialMediaUser{
        public:

        string username;
        int followers;

        void displayProfile(){

            cout<<"Username : "<<username<<endl;
            cout<<"Followers :"<<followers<<endl;
        }
    };

int main(){

    SocialMediaUser u;

    u.username="Afzal Vantiya";

    u.followers=528;

    u.displayProfile();
    
    return 0;
}