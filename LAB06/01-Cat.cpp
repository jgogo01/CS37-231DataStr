#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isCatSound(string &input, int len) {
    int status = 0;
    for (int i = 0; i < len; i++) {
        //Convert Char to lowercase
        char curr = tolower(input[i]);
        switch (status) {
            case 0:
                if (curr == 'm') status = 1;
                else return false;
                break;
            case 1:
                if (curr == 'e') status = 2;
                else if (curr == 'm') continue;
                else return false;
                break;
            case 2:
                if (curr == 'o') status = 3;
                else if (curr == 'e') continue;
                else return false;
                break;
            case 3:
                if (curr == 'w') status = 4;
                else if (curr == 'o') continue;
                else return false;
                break;
            case 4:
                if (curr == 'w') continue;
                else return false;
                break;
        }
    }
    return status == 4;
}

int main() {
    int x;
    cin >> x;

    for (int i = 0; i < x; ++i) {
        int len;
        string input;
        cin >> len >> input;

        if (isCatSound(input, len)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
