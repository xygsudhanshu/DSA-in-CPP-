#include<iostream>
#include<vector>
using namespace std;
void reversepart(int fi,int li,vector<int> &r){
    for (int i = fi,j=li; i <=j; i++,j--)
    {
        int temp=r[i];
        r[i]=r[j];
        r[j]=temp;
    }
    return;
}
void display(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
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
    int i,j;
    cout<<"enter the first index and last index:";
    cin>>i>>j;
    reversepart(i,j,v);
    display(v);
}