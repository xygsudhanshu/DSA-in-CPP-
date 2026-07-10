#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
#include<list>
using namespace std;
int v;
vector<list<int>> graph;
unordered_set<int> visited;
void add_edge(int src,int dest){
    graph[src].push_back(dest);
    graph[dest].push_back(src);
}
void display(){
    for (int i = 0; i < v; i++)
    {
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    
}
void BST(int src,vector<int> &dist){
     queue<int> q;
     visited.clear();
     q.push(src);
     dist[src]=0;
     visited.insert(src);
     while(q.size()){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(auto neighbour:graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1;
            }
        }
     }
     cout<<endl;
}
int main(){
    cin>>v;
    graph.clear();
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int src,dest;
        cin>>src>>dest;
        add_edge(src,dest);
    }
    vector<int> dist(v,INT16_MAX);
    BST(0,dist);
    cout<<endl;
    for (int i = 0; i < v; i++)
    {
        cout<<dist[i]<<" ";
    }
    
}