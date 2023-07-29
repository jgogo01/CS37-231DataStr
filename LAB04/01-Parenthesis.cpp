// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string x;
    bool ckInvaild = false;
    stack<char> stackBracket;
    
    cin >> x;
    
    for(int i = 0; x[i] != '\0'; i++){
       if(x[i] == '('){
           stackBracket.push('(');
       }else{
           if(i == 0 && x[i] == ')'){
               ckInvaild = true; //Case )XXXXX 
               break;
           }
           if(!stackBracket.empty()){
                stackBracket.pop();   
           }else{
               ckInvaild = true;//Case XXXXX)
           }
       }
    }
    
    if(!stackBracket.empty() || ckInvaild == true){
        cout << "NO";
    }else{
        cout << "YES";
    }
}