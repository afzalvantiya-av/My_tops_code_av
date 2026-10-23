#include<iostream>

using namespace std;

    class PaymentProcessor{
        public:

        void processPayment(int amount){
            cout<<"Payment without CouponCode"<<endl;
            cout<<"Amount : "<<amount<<endl;
        }

        void processPayment(int amount, string couponCode){
            cout<<"Amount after CouponCode applied"<<endl;
            cout<<"Amount : "<<amount<<endl;

            if (couponCode=="SAVE50"){
                amount=amount-(amount * 0.50);
            }

            cout<<"CouponCode : "<<couponCode<<endl;
            cout<<"Final Amount : "<<amount<<endl; 
        }
    };

int main(){

    PaymentProcessor p;

    p.processPayment(450);
    p.processPayment(450, "SAVE50");

    return 0;
}