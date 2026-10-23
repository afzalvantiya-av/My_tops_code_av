#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    int choice;
    string title,platform,status;
    int views;

    do{

        cout<<"1. Add New Content Idea"<<endl;
        cout<<"2. Exit"<<endl;
        
        cout<<"Enter your choice: ";
        cin>>choice;

        cin.ignore();

        if(choice==1){

            cout<<"Enter content title: ";
            getline(cin,title);

            cout<<"Enter platform (Instagram/YouTube): ";
            getline(cin,platform);

            cout<<"Enter number of views: ";
            cin>>views;
            cin.ignore();

            cout<<"Enter status (Idea/Posted): ";
            getline(cin,status);

            
            ofstream fout("content_list.txt",ios::app);

            if(fout.is_open()){

                fout<<"Title: "<<title<<endl;
                fout<<"Platform: "<<platform<<endl;
                fout<<"Views: "<<views<<endl;
                fout<<"Status: "<<status<<endl;

                fout.close();

                cout<<"Content idea saved successfully!"<<endl;

            } 
            else{

                cout<<"Error opening file!"<<endl;

            }
        }
        else if(choice==2){

            cout<<"Exiting Content Idea Manager."<<endl;

        }
        else{

            cout<<"Invalid choice! Please try again."<<endl;

        }

    }while(choice!=2);

    return 0;
}