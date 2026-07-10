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
// void printlevel(node* root,int& n){
       
//         if(root==NULL) {
//             n++;
//             return;
//         }
//         if(n==1){
//             cout<<root->val<<" ";
//             n++;
//             return;
//         }
//         printlevel(root->left,--n);
//         printlevel(root->right,--n);
//         n++;
// }
// void displayrighttoleft(node* root,int& n){
//     if(root==NULL) {
//         n++;
//         return;
//     }
//     if(n==1){
//         cout<<root->val<<" ";
//         n++;
//         return;
//     }
//     displayrighttoleft(root->right,--n);
//     displayrighttoleft(root->left,--n);
//     n++;
// }
// void displayAll(node* root){
//     int n=levels(root);
//     for (int i = 1; i <= n; i++)
//     {
//         displayrighttoleft(root,i);
//         cout<<endl;
//     }
// }
   //Raghav Sir Approach for printing by Level
void printlevelLtoR(node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    printlevelLtoR(root->left,curr+1,level);
    printlevelLtoR(root->right,curr+1,level);
}
void printlevelRtoL(node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    printlevelRtoL(root->right,curr+1,level);
    printlevelRtoL(root->left,curr+1,level);
}
void levelOrder(node* root){
    int n=levels(root);
    for (int i = 1; i <= n; i++)
    {
        printlevelRtoL(root,1,i);
        // printlevelLtoR(root,1,i);
        cout<<endl;
    }
    
}
int main(){
    node* a=new node(1);
    node* b=new node(7);
    node* c=new node(9);
    node* d=new node(2);
    node* e=new node(6);
    node* f=new node(9);
    node* g=new node(5);
    node* h=new node(11);
    node* i=new node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    e->left=g;
    e->right=h;  
    c->right=f;
    f->left=i;
    display(a);
    cout<<endl;
    levelOrder(a);
}