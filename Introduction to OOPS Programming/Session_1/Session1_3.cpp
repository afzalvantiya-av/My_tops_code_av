#include<iostream>

using namespace std;

    class task{
        public:
        string title;
        bool isDone=false;

        void markDone(){
            isDone=true;
        }

        void display(){
            cout << "Task: " << title << endl;
            cout << "Status: " << (isDone ? "DONE" : "NOT DONE") << endl;
        }
    };

int main(){

    task a;
    a.title="Work";
    a.isDone=false;

    //default isdone false task not done
    a.display();
    
    //After isdone true Task done
    a.markDone();
    a.display();

    return 0;
}