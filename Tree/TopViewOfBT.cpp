#include<iostream>
#include<queue>
#include<climits>
#include<unordered_map>
// typedef pair<node*,int> pni;
using namespace std;
class node{
 public:
     int val;
     node* left;
     node* right;
     node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
     }
};
node* BT(int arr[],int n){
    node* root=new node(arr[0]);
    queue<node*> q;
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        node* temp=q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT32_MIN) l=new node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT32_MIN) r=new node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void display(node* root){
    queue<node*> q;
    q.push(root);
    while(q.size()>0){
        node* temp=q.front();
        cout<<temp->val<<" ";
        q.pop();
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
void topview(node* root){
    unordered_map<int,int> m; //<level,node->val>
    queue<pair<node*,int>> q;// <node*,level>
    pair<node*,int> p;
    p.first=root;
    p.second=0;
    q.push(p);
    while(q.size()>0){
        node* temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(m.find(level)==m.end()){
            m[level]=temp->val;
        }
        if(temp->left!=NULL){
            pair<node*,int> lr;
            lr.first=temp->left;
            lr.second=level-1;
            q.push(lr);
        }
        if(temp->right!=NULL){
            pair<node*,int> lr;
            lr.first=temp->right;
            lr.second=level+1;
            q.push(lr);
        }
    }
    int minlevel=INT_MAX;
    int maxlevel=INT_MIN;
    for(auto x:m){
        int level=x.first;
        minlevel=min(minlevel,level);
        maxlevel=max(maxlevel,level);
    }
    for(int i=minlevel;i<=maxlevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,INT32_MIN,6,INT32_MIN,INT32_MIN,7,8,INT32_MIN,INT32_MIN};
    node* head=BT(arr,13);
    display(head);
    topview(head);
}