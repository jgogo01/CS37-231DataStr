#include <iostream>
#include <list>
using namespace std;

class Graph{
    int n;
    list<int> *adj;

    void DFSVisit(int v, bool visited[]);
    
    public:
        Graph(int n);
        void addEdge(int v, int w);
        void DFSInit(int s);
};

//Constructor
Graph::Graph(int n){
    this->n = n;
    adj = new list<int>[n];
}

//Add Edge
void Graph::addEdge(int v, int w){
    //Undirected Graph
    adj[v].push_back(w);
    adj[w].push_back(v);
}

//DFS
void Graph::DFSVisit(int v, bool visited[]){
    visited[v] = true;
    cout << v << " ";

    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); i++){
        if(!visited[*i]){
            DFSVisit(*i, visited);
        }
    }
}

//DFS Init
void Graph::DFSInit(int s){
   bool *visited = new bool[n];
    for(int i = 0; i < n; i++){
         visited[i] = false;
    }
    DFSVisit(s, visited);
}

int main(){

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    
    g.DFSInit(2);
}