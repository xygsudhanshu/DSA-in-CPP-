#include<iostream>
#include<vector>
using namespace std;
void pascal(int n){
    vector<vector<int>> v;
    for (int i = 0; i < n; i++){
        // vector<int> help;
        vector<int> help(i+1);
        for (int j = 0; j <= i; j++){
            if(i==j||j==0){
                // help.push_back(1);
                help[j]=1;
            }
            else{
                // help.push_back((v[i-1][j]+v[i-1][j-1]));
                help[j]=v[i-1][j]+v[i-1][j-1];
            }
        }
        v.push_back(help);
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int n=5;
    pascal(n);
    return 0;
}