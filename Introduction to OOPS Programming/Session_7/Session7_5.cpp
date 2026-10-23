#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream fout("insta_followers.txt");

    fout<<"Afzal1234"<<endl;
    fout<<"Agam101"<<endl;
    fout<<"Hadi786"<<endl;
    fout<<"Mohmmad4545"<<endl;

    fout.close();


    ifstream fin("insta_followers.txt");

    string username;
    int count=0;

    if(!fin){

        cout<<"Error Opening file!"<<endl;
        return 1;
    }

    while(getline(fin, username)){

        count++;

    }

    fin.close();

    cout<<"Total Instagram followers : "<<count<<endl;

    return 0;
}
