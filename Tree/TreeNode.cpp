#include<iostream>
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
void display(node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(node* root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int size(node* root){
        if(root==NULL) return 0;
        return 1+size(root->left)+size(root->right);
}
int product(node* root){
    if(root==NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}
int maxofTree(node* root){
    if(root==NULL) return INT32_MIN;
    int lmax=maxofTree(root->left);
    int rmax=maxofTree(root->right);
    return max(root->val,max(lmax,rmax));
}
int minofTree(node* root){
    if(root==NULL) return INT32_MAX;
    int lmin=minofTree(root->left);
    int rmin=minofTree(root->right);
    return min(root->val,min(lmin,rmin)); 
}
int levels(node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
int main(){
    node* a=new node(1);
    node* b=new node(12);
    node* c=new node(3);
    node* d=new node(4);
    node* e=new node(5);
    node* f=new node(-6);
    a->left=b;
    a->right=c;
    b->left=d;
    c->left=e;
    c->right=f;
    display(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<product(a)<<endl;
    cout<<maxofTree(a)<<endl;
    cout<<minofTree(a)<<endl;
    cout<<levels(a)<<endl;
}