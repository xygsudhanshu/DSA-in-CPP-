#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string filename;
    cout<<"Enter your file name:\n";
    cin>>filename;
    ifstream file(filename);//open file in read mode
    if(!file){
        cout<<"Error ! file could not be open!!\n";
        return 1;
    }
    char ch;
    int count=0;
    while(file.get(ch)){
        count++;
    }
    cout<<"total character is:"<<count<<endl;
    return 0;
}