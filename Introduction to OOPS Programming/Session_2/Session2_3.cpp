#include<iostream>

using namespace std;

    class FoodOrder{
        public:
        int OrderId=343;
        string restaurantName="Dominoz";
        bool isDelivered=false;

        void markDelivered(){
            isDelivered=true;
        }

        void show(){

            cout<<"Order Id : "<<OrderId<<endl;
            cout<<"Restaurant Name : "<<restaurantName<<endl;
            cout<<"Status : "<<(isDelivered ? "Delivered" : "Not Delivered")<<endl;
        }
    };

int main(){

    FoodOrder r;

    // r.markDelivered();

    r.show();

    return 0;
}