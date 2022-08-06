#include <string>
#include <iostream>
using namespace std;

std::string cat_mouse(std::string x) {
    int size = x.length();
    int dots = 0;
    for (int i = 0; i < size; i++)
        if (x[i] == '.') {
            dots += 1;
        }
    if (dots < 4) {
        return "Caught!";
    }
    else {
        return "Escaped!";
    }
}

int main() {
    string s;
    cin >> s;
    cout<<cat_mouse(s);
}
