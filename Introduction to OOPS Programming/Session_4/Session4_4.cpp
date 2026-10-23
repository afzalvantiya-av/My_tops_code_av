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

    class GamingYouTuber : public YouTuber{
        public:

        void streamGame(string gameName){

            cout<<username<<" is now streaming "<<gameName<<" on "<<channelName;
        }
    };

int main(){

    // SocialMediaUser u;
    // u.username="Afzal Vantiya";
    // u.followers=528;
    // u.displayProfile();

    // YouTuber y;
    // y.channelName="Jokker Gaming";
    // y.uploadVideo("Road to 50k");

    GamingYouTuber g;
    g.username="Jokker";
    g.channelName="jokker gaming";

    g.streamGame("BGMI");
    
    return 0;
}