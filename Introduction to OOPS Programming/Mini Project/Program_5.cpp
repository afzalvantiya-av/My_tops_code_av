
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Content {
    string title, platform, status;
    int views;
};

int main() {
    int choice;

    do {
        cout << "\n1. Display Content Ideas";
        cout << "\n2. Update Content Status";
        cout << "\n3. Delete Content Idea";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            ifstream file("content_list.txt");
            vector<Content> items;
            Content c;
            string line;

            if (!file) {
                cout << "File not found!" << endl;
                continue;
            }

            while (getline(file, line)) {
                if (line.find("Title: ") == 0) {
                    c.title = line.substr(7);

                    if (!getline(file, line)) break;
                    c.platform = line.substr(10);

                    if (!getline(file, line)) break;
                    c.views = stoi(line.substr(7));

                    if (!getline(file, line)) break;
                    c.status = line.substr(8);

                    items.push_back(c);
                }
            }
            file.close();

            if (items.empty()) {
                cout << "No content found!" << endl;
                continue;
            }

            for (int i = 0; i < items.size(); i++) {
                cout << "\n" << i + 1 << ". " << items[i].title;
                cout << "\nPlatform: " << items[i].platform;
                cout << "\nViews: " << items[i].views;
                cout << "\nStatus: " << items[i].status << endl;
            }

            if (choice == 2) {
                int n;
                cout << "Enter content number to update: ";
                cin >> n;

                if (n < 1 || n > items.size()) {
                    cout << "Invalid number!" << endl;
                    continue;
                }

                cout << "Enter new status (Idea/Posted): ";
                cin >> items[n - 1].status;
            }

            if (choice == 3) {
                int n;
                cout << "Enter content number to delete: ";
                cin >> n;

                if (n < 1 || n > items.size()) {
                    cout << "Invalid number!" << endl;
                    continue;
                }

                items.erase(items.begin() + n - 1);
                cout << "Content deleted successfully!" << endl;
            }

            if (choice == 2 || choice == 3) {
                ofstream out("content_list.txt");

                for (Content item : items) {
                    out << "Title: " << item.title << endl;
                    out << "Platform: " << item.platform << endl;
                    out << "Views: " << item.views << endl;
                    out << "Status: " << item.status << endl;
                }

                out.close();
            }

            if (choice == 3) {
                cout << "\nUpdated Content List:" << endl;

                for (int i = 0; i < items.size(); i++) {
                    cout << i + 1 << ". " << items[i].title
                         << " - " << items[i].status << endl;
                }

                if (items.empty())
                    cout << "No content items remaining." << endl;
            }
        }
        else if (choice == 4) {
            cout << "Thank you" << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
