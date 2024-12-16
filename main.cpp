#include <iostream>

using namespace std;

string binn(int n) {

    string binn = "";
    while (n > 0) {
        binn = (n % 2 == 0 ? "0" : "1") + binn;
        n /= 2;
    }
    
    return binn;
}

int main() {
        int x, i;
        cout << "Enter x and i ";
        cin >> x >> i;
        if (binn(x).length() > i || i >= 0)
            cout <<  binn(x)[i];
        
        return 0;
}