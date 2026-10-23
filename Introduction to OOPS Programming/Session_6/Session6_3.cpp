#include<iostream>

using namespace std;

    class Product{
        protected:
        virtual void upload()=0;
    };

    class Electronics : public Product{
        public:
        void upload(){
            cout<<"This is Electronic class"<<endl;
        }
    };

    class Clothing : public Product{
        public:
        void upload(){
            cout<<"This is Clothing class"<<endl;
        }
    };

int main(){

    Clothing c;
    c.upload();

    Electronics e;
    e.upload();

    return 0;
}