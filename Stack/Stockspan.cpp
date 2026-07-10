#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    stack<int> st;
    int pge[n];
    pge[0]=1;
    st.push(0);
    for (int i =1; i<n; i++)
    {
        //pop,ans,push
        while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
        if(st.size()==0) pge[i]=1;
        else pge[i]=i-st.top();
        st.push(i);
    }
    //printing the ans array
    for (int i = 0; i <n; i++)
    {
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}