// Brute force soln:
// #include<iostream>
// using namespace std;
// int main(){
//     //brute force solution
//     int arr[]={2,-3,4,4,-7,-1,4,-2,6};
//     int k=3;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int ans[n-k+1];
//     for(int i=0;i<n;i++){
//         for(int j=i;j<i+k;j++){
//             if(arr[j]<0){
//                 ans[i]=arr[j];
//                 break;
//             } 
//         }
//     }
//     for(int i=0;i<n-k+1;i++){
//         cout<<ans[i]<<" ";
//     }

// }



// Optimized soln:
#include<iostream>
using namespace std;
int main(){
    //0  1 2 3  4  5 6  7 8
    //2,-3,4,4,-7,-1,4,-2,6
    //i    j
    //p
    int arr[]={5,8,6,3,2,4,7,9};
    int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);//9
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans[n-k+1];
    int fidx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            fidx=i;
            break;
        }
    }
    // if(fidx<k){
    //     ans[0]=arr[fidx];
    // }
    // else ans[0]=0;
    int i=0;
    int j=k-1;
    while(j<n){
        if(fidx<=j && fidx>=i){
            ans[i]=arr[fidx];
        }
        else{
            fidx=i;
            while(fidx<=j){
                if(arr[fidx]<0) break;
                else fidx++;
            }
            if(fidx<=j) ans[i]=arr[fidx];
            else {
                ans[i]=0;
                fidx=i-1;
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
}