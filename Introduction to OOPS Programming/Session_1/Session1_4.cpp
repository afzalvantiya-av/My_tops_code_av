#include<iostream>

using namespace std;

    class TaskList{
        string title;
        int i;

        public:

        void addTask(string title){
            this->title=title;
        }

        void markTaskDone(int i){
            this->i=i;
        }

        void showcase(){
            cout<<"Task :" <<title<<endl;
            cout<<"Status :" <<(i ? "DONE" : "NOT DONE")<<endl;
        }
    };

int main(){

    TaskList a1,a2,a3;

    a1.addTask("GYM");
    a1.markTaskDone(1);
    a1.showcase();

    a2.addTask("Running");
    a2.markTaskDone(0);
    a2.showcase();

    a3.addTask("Work");
    a3.markTaskDone(1);
    a3.showcase();

    return 0;
}