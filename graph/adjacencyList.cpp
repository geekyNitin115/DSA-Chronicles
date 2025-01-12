#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
class graph{

public:
    unordered_map<int, list<int> >adj;
    void addEdges(int u, int v, bool direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};    

int main(){
    int n;
    cin>>n;
    cout<<"enter the number of nodes"<<endl;
    int m;
    cin>>m;
    cout<<"enter the number of edges"<<endl;

    graph g;
    for(int i=0;i<m;i++) {
        int u,v;
        cin>>u>>v;

        g.addEdges(u,v,0);
    }
    g.printAdjList();
    return 0;
};
