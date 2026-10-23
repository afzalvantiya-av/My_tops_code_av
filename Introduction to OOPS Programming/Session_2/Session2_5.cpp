#include<iostream>

using namespace std;

    class FoodOrder{
        public:
        int OrderId;
        string restaurantName;
        bool isDelivered;

        void markDelivered(){
            isDelivered=true;
        }

        void show(int id, string name, bool delivered){

            OrderId = id;
            restaurantName = name;
            isDelivered = delivered;

            cout<<"Order Id : "<<OrderId<<endl;
            cout<<"Restaurant Name : "<<restaurantName<<endl;
            cout<<"Status : "<<(isDelivered ? "Delivered" : "Not Delivered")<<endl;
        }
    };

int main(){

    FoodOrder r;

    // r.markDelivered();

    r.show(343, "Pizzahut", true);

    return 0;
}