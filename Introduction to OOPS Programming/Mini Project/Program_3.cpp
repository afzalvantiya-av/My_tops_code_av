#include <iostream>
#include <fstream>
#include <string>
using namespace std;

    void displayContent(){

        ifstream file("content_list.txt");

        string line;
        string title,platform;
        int count = 0;

        if(!file.is_open()){

            cout<<"Error opening file!"<<endl;
            return;
        }

        while(getline(file,line)){

            if(line.find("Title: ")==0){

                title=line.substr(7);

                getline(file,line);
                platform=line.substr(10);

                getline(file, line);
                getline(file, line);
                getline(file, line);

                count++;

                cout<<count<<". Title: "<<title<<endl;
                cout<<"   Platform: "<< platform<<endl;

            }
        }

        if(count==0){

            cout<<"No content items found."<<endl;
            
        }

        file.close();

    }

int main(){

    displayContent();

    return 0;
}