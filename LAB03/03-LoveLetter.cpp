#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char x[101];
    char vow[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    cin.getline(x, 101);

    for (int i = 0; x[i] != '\0'; i++) {
        cout << x[i];
        if (find(vow, vow + 11, x[i]) != vow + 11) {
            i += 2;
        }
    }

    return 0;
}
