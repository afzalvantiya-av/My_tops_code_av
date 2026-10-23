#include<iostream>

using namespace std;

    class Product{
        public:

        string productname;
        int price;
        float rating;

        Product(string productname, int price, float rating){

            this->productname=productname;
            this->price=price;
            this->rating=rating;

        }

        void show(){

            cout<<"Product Name : "<<productname<<endl;
            cout<<"Price : "<<price<<endl;
            cout<<"Rating : "<<rating<<endl;
        }
    };

int main(){
    
    Product p=Product("Iphone 16", 79999, 4.5);

    p.show();

    return 0;
}