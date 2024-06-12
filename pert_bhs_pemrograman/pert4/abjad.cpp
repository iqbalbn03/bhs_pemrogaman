#include <iostream>
#include <string>
using namespace std;

int main() {
    string huruf = "a";

    for (int p = 1; p < 26; ++p) {
        huruf += static_cast<char>('a' + p);
    }

    cout << huruf << endl;

    return 0;
}
