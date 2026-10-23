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

    class Podcaster : public SocialMediaUser{
        public:

        string podcastName;

        void publishEpisode(string episodeTitle){
            
            cout<<"Episode "<<episodeTitle<<" published on "<<podcastName<< endl;
        }
    };

    class GamingYouTuber : public YouTuber{
        public:

        void streamGame(string gameName){

            cout<<username<<" is now streaming "<<gameName<<" on "<<channelName;
        }
    };

    class InstagramInfluencer : public SocialMediaUser{
        public:
        
        void postStory(string storyTitle){
            cout<<username<<" posted a new story "<<storyTitle<<endl;
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

    // GamingYouTuber g;
    // g.username="Jokker";
    // g.channelName="jokker gaming";
    // g.streamGame("BGMI");

    InstagramInfluencer i;

    i.username="Afzal Vantiya";
    i.postStory("My Life Routine.");
    
    return 0;
}