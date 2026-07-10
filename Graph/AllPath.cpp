#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> ans;
int v;
void add_edge(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}
void display(){
    for (int i = 0; i < v; i++)
    {
        cout<<i<<" ";
        for(auto el:graph[i]){
            cout<<el<<",";
        }
        cout<<endl;
    }
    
}
void dfs(int curr,int end,vector<int> &v){
    if(curr==end){
        v.push_back(curr);
        ans.push_back(v);
        v.pop_back();
        return;
    }
    visited.insert(curr);
    v.push_back(curr);
     for(auto neighbour:graph[curr]){
        if(!visited.count(neighbour)){
           dfs(neighbour,end,v);
        }
    }
    visited.erase(curr);
    v.pop_back();

}
void allpath(int src,int dest,vector<int> &v){
    dfs(src,dest,v);
}
int main(){
     cin>>v;
     graph.resize(v,list<int>());
     int edge;
     cin>>edge;
     while(edge--){
        int src,dest;
        cin>>src>>dest;
        add_edge(src,dest);
     }
     display();
     vector<int> v;
     allpath(0,6,v);
     for (int i = 0; i < ans.size(); i++)
     {
        for (auto el:ans[i])
        {
            cout<<el<<" ";
        }
        cout<<endl; 
     }
     
}