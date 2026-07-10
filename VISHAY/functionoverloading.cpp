// #include<iostream>
// #include<vector>
// using namespace std;
// class criminal{
// public:
//     string name;
//     int CriminalNum;
//     int adhar;
//     int pan;
//     string whathehasdne;
//     criminal* next;
//     // public:
//     criminal(string n){
//         name=n;
//     }
// };
// class criminalrecord{
//     public:
//     criminal* start;
//     criminal* end;
//     int tno;
//     criminalrecord(){
//         start=end=NULL;
//         tno=0;
//     }
//     void addCriminal(string name){
//         criminal* temp=new criminal(name);
//         criminal* head=start;
//         if(tno==0){
//             head=end=temp;
//             tno++;
//         }
//         else{
//             head->next=temp;
//             tno++;
//             head=head->next;
//         }
//     }
// };
// int main(){
//     int n;
//     string s;
//     criminalrecord c1;
//     cout<<"1.select 1 to add criminal:\n";
//     cout<<"2.select 2 to search criminal:\n";
//     cin>>n;
//     if(n==1){
//         cout<<"Enter name of criminal:\n";
//         cin>>s;
//         c1.addCriminal(s);

//     }
// }
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

// Class to store data for one FIR
class FIR {
public:
    string firNumber;
    unordered_set<string> cdr;
    unordered_set<string> bankAccounts;
    unordered_set<string> idpr;

    FIR(string num) {
        firNumber = num;
    }

    void addData(string type, string value) {
        if (type == "CDR") {
            cdr.insert(value);
        } else if (type == "Bank") {
            bankAccounts.insert(value);
        } else if (type == "IDPR") {
            idpr.insert(value);
        }
    }

    void display() {
        cout << "\n📂 FIR: " << firNumber << "\n";
        cout << "📱 CDR Data: ";
        for (const string& d : cdr) cout << d << " ";
        cout << "\n🏦 Bank Accounts: ";
        for (const string& d : bankAccounts) cout << d << " ";
        cout << "\n🪪 IDPR Data: ";
        for (const string& d : idpr) cout << d << " ";
        cout << "\n";
    }
};

// Manager class to handle all FIRs and interlinkages
class FIRManager {
private:
    unordered_map<string, FIR> firs; // FIR number -> FIR object
    unordered_map<string, vector<string>> globalTracker; // data value -> list of FIRs

public:
    void addData(string firNo, string type, string data) {
        // Create FIR if not exists
        if (firs.find(firNo) == firs.end()) {
            firs[firNo] = FIR(firNo);
        }

        // Add data
        firs[firNo].addData(type, data);

        // Alert if duplicate data found
        if (globalTracker.find(data) != globalTracker.end()) {
            cout << "⚠️  ALERT: Data [" << data << "] also found in FIR(s): ";
            for (const string& f : globalTracker[data]) {
                if (f != firNo) cout << f << " ";
            }
            cout << endl;
        }

        globalTracker[data].push_back(firNo);
    }

    void showFIR(string firNo) {
        if (firs.find(firNo) == firs.end()) {
            cout << "❌ No data found for FIR " << firNo << endl;
            return;
        }
        firs[firNo].display();
    }
};

int main() {
    FIRManager manager;
    int choice;
    string firNo, type, data;

    while (true) {
        cout << "\n\n🚔 Police Investigation Manager (OOP Version)\n";
        cout << "1. Add Data\n2. Show FIR Details\n3. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter FIR number: ";
                cin >> firNo;
                cout << "Enter data type (CDR / Bank / IDPR): ";
                cin >> type;
                cout << "Enter data value: ";
                cin >> data;
                manager.addData(firNo, type, data);
                break;

            case 2:
                cout << "Enter FIR number to display: ";
                cin >> firNo;
                manager.showFIR(firNo);
                break;

            case 3:
                cout << "👋 Exiting...\n";
                return 0;

            default:
                cout << "❌ Invalid choice.\n";
        }
    }
}
