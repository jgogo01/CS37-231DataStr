#include <iostream>
using namespace std;

int main() {
    int n, m, k;

    //Input Arr 2D Size
    cin >> n >> m;

    //Init Arr 2D
    int arr[n][n];

    //Init Arr 2D to 0
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }

    //Input Search Vertex
    cin >> k;
    
    //Input isAg
    for(int i = 0; i < m; i++){//By Edge
        int x;
        int y;
        cin >> x;
        cin >> y;
        //Undirected Graph
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    
    int count = 0;
    for(int i = 0; i < n; i++){//By Row (Find Degree of Vertex)
        if(arr[k][i] == 1){
            count++;
        }
    }

    cout << count;
}