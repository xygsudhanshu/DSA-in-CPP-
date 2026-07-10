#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int levels(node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
// void display(node* root){
//     if(root==NULL) return;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }
void printlevelLtoR(node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    printlevelLtoR(root->left,curr+1,level);
    printlevelLtoR(root->right,curr+1,level);
}
void levelOrder(node* root){
    int n=levels(root);
    for (int i = 1; i <= n; i++)
    {
        printlevelLtoR(root,1,i);
        // printlevelLtoR(root,1,i);
        cout<<endl;
    }
    
}
void printleaf(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    printleaf(root->left);
    printleaf(root->right);
}
void printleft(node* root){
   if(root==NULL) return;
   if(root->left  || root->right) cout<<root->val<<" ";
   printleft(root->left);
   if(root->left==NULL) printleft(root->right);
}
void printright(node* root){
    if(root==NULL) return;
    printright(root->right);
    if(root->right==NULL) printright(root->left);
    if(root->left  || root->right) cout<<root->val<<" ";
 }
 void boundaryelements(node* root){
    printleft(root);
    printleaf(root);
    printright(root->right);
 }
node* constructTree(int arr[],int n){
      queue<node*> q;
      node* root=new node(arr[0]);
      q.push(root);
      int i=1,j=2;
      while(q.size()>0 && i<n){
        node* temp=q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i] != INT32_MIN) l=new node(arr[i]);
        else l=NULL;
        if(j<n && arr[j] != INT32_MIN) r=new node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);
        i+=2;
        j+=2;
      }
      return root;
}
int main(){
    int arr[]={1,2,3,4,5,INT32_MIN,6,7,INT32_MIN,8,INT32_MIN,9,10,INT32_MIN,11,INT32_MIN,12,INT32_MIN,13,INT32_MIN,14,15,16,INT32_MIN,17,INT32_MIN,INT32_MIN,18,INT32_MIN,19,INT32_MIN,INT32_MIN,INT32_MIN,20,21,22,23,INT32_MIN,24,25,26,29,INT32_MIN,INT32_MIN,28,INT32_MIN,INT32_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    node* root= constructTree(arr,n);
    //boundary elements
    boundaryelements(root);
}