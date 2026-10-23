#include<iostream>

using namespace std;

    class InstaStory{
        protected:
        int storyViews=123;

    };

    class SponsoredStory : public InstaStory{
        public:
        void display(){
            cout<<"StoryViews : "<<storyViews<<endl;
        }
    };

int main(){

    SponsoredStory s;

    s.display();
}