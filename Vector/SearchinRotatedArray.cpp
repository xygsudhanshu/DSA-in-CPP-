#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int pivot=0;
        // finding pivot
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            // if(nums[mid]<nums[mid+1]&&nums[mid]<nums[mid-1]) pivot=mid;
            // else if(nums[mid]>nums[hi]) lo=mid+1;
            // else hi=mid;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid;
        }
        pivot=lo;
        cout << "Pivot found at index: " << pivot << endl;

    // 
     lo=0;
     hi=pivot-1;
     while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) lo=mid+1;
        else  hi=mid-1;
        
     }
    //  search in right part
     lo=pivot;
     hi=n-1;
     while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if (nums[mid] == target) return mid;
        else if(nums[mid]<target) lo=mid+1;
        else  hi=mid-1;
        
     }
     return -1;
    }
int main(){
     vector<int> v = {4, 5, 6, 7, 0, 1, 2};
    int target=0;
    cout<<"hello;";
    cout<<search(v,target);
    cout<<"hello;";
    return 0;
}