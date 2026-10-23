#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    string songname;

    cout<<"Enter a song name : "<<endl;

    getline(cin,songname);

    ofstream file("my_fav_songs.txt", ios::app);

    if(file.is_open()){

        file<<songname<<endl;
        file.close();
    
        cout<<"Songs Added Successfully."<<endl;

    }
    else{
        cout<<"Error Opening file!"<<endl;
    }

    return 0;
}