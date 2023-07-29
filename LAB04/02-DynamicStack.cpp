// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stack;
    int x;
    int data;
    int command;
            
    cin >> x;
    for(int i = 0; i < x; i++){
        cin >> command;
        switch(command){
            case 1:
                cin >> data;
                stack.push(data);
                break;
            case 2:
                if(!stack.empty()){
                    stack.pop();
                }
                break;
            case 3:
                if(!stack.empty()){
                    cout << stack.top() << endl;
                }else{
                    cout << "EMPTY" << endl;
                }
                break;
            case 4:
                cout << stack.size() << endl;
                break;
        }
    }
}