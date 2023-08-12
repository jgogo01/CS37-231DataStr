// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;

typedef struct __Customer{
    int money;
    int queue;
}Customer;

int main() {
    int n, max;
    int x;
    queue<Customer> q;
    
    cin >> n;
    cin >> max;
    
    //Intro Queue
    for(int i = 0; i < n; i++){
        cin >> x;
        
        //Add 
        Customer trans;
        trans.money = x;
        trans.queue = i+1;
        
        q.push(trans);
    }
    
    //Procress
    while(!q.empty()){
        if(q.front().money > max){
            q.front().money = q.front().money - max;
            q.push(q.front());
            q.pop();
        }else{
            cout << q.front().queue << " ";
            q.pop();
        }
    }
    
}
