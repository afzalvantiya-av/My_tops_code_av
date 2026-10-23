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

    class YouTuber : public SocialMediaUser{
        public:
        
        string channelName;

        void uploadVideo(string title){
            cout<<"Video "<<title<<" uploaded to "<<channelName<<endl;
        }
    };

int main(){

    // SocialMediaUser u;

    // u.username="Afzal Vantiya";

    // u.followers=528;

    // u.displayProfile();

    YouTuber y;

    y.channelName="Jokker Gaming";

    y.uploadVideo("Road to 50k");
    
    return 0;
}