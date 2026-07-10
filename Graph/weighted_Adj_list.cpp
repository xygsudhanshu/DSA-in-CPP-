#include<iostream>
#include<vector>
#include<list>
using namespace std;
typedef pair<int,int> pi;
vector<list<pi>> graph;
int v;
void add_edge(int src,int dest,int wt,bool bi_dir=true){
    graph[src].push_back({dest,wt});
    if(bi_dir) graph[dest].push_back({src,wt});
}
void display(){
    for (int i = 0; i < v; i++)
    {
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<"{"<<el.first<<","<<el.second<<"}";
        }
        cout<<endl;
    }
    
}
int main(){
    cin>>v;
    graph.resize(v,list<pi>());
    int edge;
    cin>>edge;
    while(edge--){
        int src,dest,wt;
        cin>>src>>dest>>wt;
        add_edge(src,dest,wt);
    }
    display();
}