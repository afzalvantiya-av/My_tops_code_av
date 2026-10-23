#include<iostream>
#include<fstream>

using namespace std;

int main(){

    string productname;
    int price;
    ofstream fout("Wishlist.txt");
    

    for(int i=0;i<3;i++){

        cout<<"Enter Product name : "<<endl;
        getline(cin, productname);
        
        cout<<"Enter product price : "<<endl;
        cin>>price;
        cin.ignore();

        fout<<productname<<endl;
        fout<<price<<endl;
    }

    fout.close();

    ifstream fin("Wishlist.txt");
    
    for(int i=0;i<3;i++){

        getline(fin, productname);
        fin>>price;
        fin.ignore();

        cout<<"product name : "<<productname<<endl;
        cout<<"price : "<<price<<endl;

    }
    
    fin.close();

    return 0;

}