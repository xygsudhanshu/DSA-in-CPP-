#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
int v;// size of graph or no. of vertices
unordered_set<int> visited;
void add_edge(int src,int dest){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
}
void dfs(int node){
    visited.insert(node);
    for(auto buddy:graph[node]){
        if(visited.count(buddy)==0){
            dfs(buddy);
        }
    }
}
int connected_component(){
    int result=0;
    for(int i=0;i<v;i++){
        if(visited.count(i)==0){
            result++;
            dfs(i);
        }
    }
    return result;
}
int main(){
    cin>>v;
    graph.clear();
    graph.resize(v,list<int>());
    int e;//no. of edges
    cin>>e;
    while(e--){
        int src,dest;
        cin>>src>>dest;
        add_edge(src,dest);
    }
    visited.clear();
    cout<<connected_component()<<endl;
}
