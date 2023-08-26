#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numMonster = 0;
    cin >> numMonster;
    int arrHealth[numMonster];

    for(int i = 0; i < numMonster; i++){
        cin >> arrHealth[i]; 
    }
    
    // Sorting
    sort(arrHealth, arrHealth + numMonster);

    int numWeapon = 0;
    cin >> numWeapon;

    // Count
    int counts[numWeapon];

    for(int i = 0; i < numWeapon; i++){
        int damage;
        cin >> damage;

        counts[i] = lower_bound(arrHealth, arrHealth + numMonster, damage + 1) - arrHealth;
    }

    // Output
    for(int i = 0; i < numWeapon; i++){
        cout << counts[i] << endl;
    }
}
