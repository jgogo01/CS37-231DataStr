// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int x;
    queue<int> q;
    
    cin >> x;
    for(int i = 0; i < x; i++){
        int y;
        cin >> y;
        if(y == 1){
            int data;
            cin >> data;
            q.push(data);
        }
        if(y == 2){
            if(!q.empty()){
                q.pop();
            }
        }
        if(y == 3){
            if(!q.empty()){
                cout << q.front() << endl;
            }else{
                cout << "EMPTY" << endl;
            }
        }
        if(y == 4){
            cout << q.size() << endl;
        }
    }
}