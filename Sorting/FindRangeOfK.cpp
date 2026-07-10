#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[]={5,3,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
     for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin=max(kmin,(arr[i+1]+arr[i])/2.0);
        }
        else{ //arr[i]<arr[i+1] or arr[i]-arr[i+1]<0
            kmax=min(kmax,(arr[i+1]+arr[i])/2.0);
        }
     }
     //dealing with kmin
     if(kmin-(int)kmin>0){//kmin is float
          kmin=(int)kmin+1;
     }
     //dealing with kmax
     //kmax se deal karne ki jaroorat hi nhi h
     //kyuki (int)kmax hame 1 kam karke hi milega
     kmax=(int)kmax;
    if(kmin>kmax) cout<<-1<<endl;
    else if(kmin==kmax) cout<<"There is only value:"<<kmin<<endl;
    else{
        cout<<"Range of K is: ["<<kmin<<","<<kmax<<"]"<<endl;
    }
}