#include<iostream>

using namespace std;


    class UserProfile{
        private:
        string phonenumber;

        public:

        void setPhoneNumber(string phonenumber){
            this->phonenumber=phonenumber;
        }

        string getPhoneNumber(){
            return phonenumber;
        }
    };

int main(){

    UserProfile u;

    u.setPhoneNumber("1234567890");
    u.getPhoneNumber();

    cout<<"Phone Number : "<<u.getPhoneNumber()<<endl;

    return 0;
}