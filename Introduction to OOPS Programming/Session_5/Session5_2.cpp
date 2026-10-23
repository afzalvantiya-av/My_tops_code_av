#include<iostream>

using namespace std;

    class SocialMediaUploader{
        public:

        void uploadContent(){

            cout<<"Uploading content to social media"<<endl;
        }
    };

    class InstagramUploader : public SocialMediaUploader{
        public:

        void uploadContent(){
            cout<<"Instagram: Uploading a photo or reel"<<endl;
        }
    };

    class YouTubeUploader : public SocialMediaUploader{
        public:

        void uploadContent(){
            cout<<"Youtube: Uploading a content"<<endl;
        }
    };

int main(){

    InstagramUploader i;
    i.uploadContent();

    YouTubeUploader y;
    y.uploadContent();

    return 0;
}