#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

    struct Content{
        string title,platform,status;
        int views;
    };

int main(){

    int choice;

    do{
        cout<<"\n1. Display Content Ideas"<<endl;
        cout<<"2. Update Content Status"<<endl;
        cout<<"3. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        cin.ignore();

        if(choice==1 || choice==2){

            ifstream file("content_list.txt");
            vector<Content>items;
            Content c;
            string line;

            if(!file.is_open()){

                cout<<"Error opening file!"<<endl;
                continue;

            }

            while(getline(file,line)){

                if(line.find("Title: ")==0){

                    c.title=line.substr(7);

                    if(!getline(file,line))
                        break;
                    c.platform=line.substr(10);

                    if(!getline(file,line))
                        break;
                    c.views=stoi(line.substr(7));

                    if(!getline(file,line))
                        break;
                    c.status=line.substr(8);

                    items.push_back(c);
                }
            }

            file.close();

            if(items.empty()){

                cout<<"No content items found."<<endl;

                continue;
            }

            for(int i=0;i<(int)items.size();i++){

                cout<<i + 1<<". Title: "<<items[i].title<<endl;
                cout<<"   Platform: "<<items[i].platform<<endl;
                cout<<"   Views: "<<items[i].views<<endl;
                cout<<"   Status: "<<items[i].status<<endl;

            }

            if(choice==2){

                int number;
                string newStatus;

                cout<<"Enter content number to update: ";
                cin>>number;
                cin.ignore();

                if(number < 1 || number > (int)items.size()) {
                    cout << "Invalid content number!" << endl;
                    continue;
                }

                cout << "Enter new status (Idea/Posted): ";
                getline(cin, newStatus);

                items[number - 1].status = newStatus;

                ofstream out("content_list.txt");

                if (!out.is_open()) {
                    cout << "Error saving file!" << endl;
                    continue;
                }

                for(const Content&item:items){

                    out<<"Title: "<<item.title<<endl;
                    out<<"Platform:"<<item.platform<<endl;
                    out<<"Views: "<<item.views<<endl;
                    out<<"Status: "<<item.status<<endl;
                }

                out.close();
                cout<<"Content updated successfully!"<<endl;
            }
        }
        else if(choice==3) {
            cout<<"Exiting Content Idea Manager."<<endl;
        }
        else{

            cout<<"Invalid choice"<<endl;
        }

    }while(choice!=3);

    return 0;
}
