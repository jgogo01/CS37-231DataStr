#include <iostream>
#include <vector>
using namespace std;

vector<int>* createGraph(int n){
    //Return Array of n lists (Vector)
    return new vector<int>[n];
}

void addEdge(vector<int>* adjList, int u, int v){
    //Undirected Graph
    adjList[v].push_back(u);
    adjList[u].push_back(v);
}

//Count Degree of Vertex
int countDegree(vector<int>* adjList, int k){
    int count = 0;
    for(int i = 0; i < adjList[k].size(); i++){
        count++;
    }
    return count;
}

int main() {
    int n, m, k;

    //Input Node, Vertex
    cin >> n >> m;
    vector<int>* adjList = createGraph(n);

    //Input Search Vertex
    cin >> k;
    
    //Input isAg
    for(int i = 0; i < m; i++){//By Edge
        int x;
        int y;
        cin >> x;
        cin >> y;
        addEdge(adjList, x, y);
    }
    
    //Count Degree of Vertex
    int count = countDegree(adjList, k);

    cout << count;
}
