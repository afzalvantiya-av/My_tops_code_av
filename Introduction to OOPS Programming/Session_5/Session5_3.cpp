#include<iostream>

using namespace std;

    class Product{
        public:

        void searchProduct(string productname){
            cout<<"Product name : "<<productname<<endl;
        }

        void searchProduct(string productname, string  category){
            cout<<"Product name : "<<productname<<endl;
            cout<<"Category : "<<category<<endl;
        }

    };

int main(){

    Product p;

    p.searchProduct("Iphone 16");

    p.searchProduct("Iphone 16","Smartphone");
    
    return 0;
}