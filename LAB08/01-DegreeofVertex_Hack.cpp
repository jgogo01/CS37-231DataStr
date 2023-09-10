#include <iostream>
using namespace std;

int main() {
    int n, m, k;

    //Input Arr 2D Size
    cin >> n >> m;

    //Input Search Vertex
    cin >> k;
    
    //Input isAg
    int count = 0;
    for(int i = 0; i < m; i++){//By Edge
        int x;
        int y;
        cin >> x;
        cin >> y;
        if(x == k || y == k){
            count++;
        }
    }

    cout << count;
}