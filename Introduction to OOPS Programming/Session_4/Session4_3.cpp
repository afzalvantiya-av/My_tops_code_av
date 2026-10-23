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
            cout<<"Video Title : "<<title<<endl<<"uploaded to : "<<channelName<<endl;
        }
    };

    class Podcaster : public SocialMediaUser{
        public:

        string podcastName;

        void publishEpisode(string episodeTitle){
            
            cout<<"Episode "<<episodeTitle<<" published on "<<podcastName<< endl;
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

    Podcaster p;
    p.podcastName="Tech talk";

    p.publishEpisode("C++ programming");
    
    return 0;
}