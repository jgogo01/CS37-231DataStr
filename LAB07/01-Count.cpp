#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int arr[x];

    //Append In Arrary
    for(int i = 0; i < x; i++){
        int y;
        cin >> y;
        arr[i] = y;
    }
    
    //Search
    int search;
    int count = 0;
    cin >> search;
    for(int i = 0; i < x; i++){
        if(arr[i] == search){
            count++;
        }
    }
    cout << count;
    return 0;
}