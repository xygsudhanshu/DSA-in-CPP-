#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter your array size:";
    cin>>n;
    cout<<"enter your array element:";
    for (int i = 0; i <n ; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> v1(v.size());
    for (int i = 0; i < n; i++)
    {
        v1[i]=v[n-1-i];
    }
        display(v1);
}