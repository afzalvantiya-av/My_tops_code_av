#include <iostream>

using namespace std;

    class Content{
        public:

        string title;
        string platform;
        int views;
        string status;

        void display(){

            cout<<"Content title : "<<title<<endl;
            cout<<"Platform : "<<platform<<endl;
            cout<<"Views : "<<views<<endl;
            cout<<"Status : "<<status<<endl;
        }
    };

int main(){

    Content c=Content();
    
    c.title = "Gaming Video";
    c.platform = "Kick";
    c.views = 1500 ;
    c.status = "Live";
    
    c.display();

    return 0;
}
