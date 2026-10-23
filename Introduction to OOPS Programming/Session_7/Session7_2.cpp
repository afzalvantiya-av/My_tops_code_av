#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ifstream fin("my_fav_songs.txt");
    string line;

    if(!fin){
        cout<<"Unable to open file!";
        return 1;
    }

    while(getline(fin, line)){
        cout<<line<<endl;
    }

    fin.close();

    return 0;
}