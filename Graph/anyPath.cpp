#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
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
bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr);
     for(auto neighbour:graph[curr]){
        if(!visited.count(neighbour)){
         bool res=dfs(neighbour,end);
          if(res) return true;
        }
     }
     return false;
}
bool anypath(int src,int dest){
   return dfs(src,dest);
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
     cout<<anypath(0,6)<<endl;
}