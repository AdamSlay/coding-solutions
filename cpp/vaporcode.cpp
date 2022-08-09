// Codewars Kata: V A P O R C O D E
// https://www.codewars.com/kata/5966eeb31b229e44eb00007a/train/cpp
#include <cctype>
#include <iostream>
#include <string>

std::string vaporcode(const std::string &str) {
    int size = str.size();
    std::string vape;
    for (int i = 0; i < size; i++) {
        if (str[i] == ' ') {
            vape += "";
        }
        else {
            vape += std::toupper(str[i]);
            if (i != size - 1) {
                vape += "  ";
            }

        }
    }
    
    if (vape[vape.size() - 1] == ' ') {
      vape = vape.substr(0,vape.size() - 2);
    }   
    return vape;
}

int main() {
    std::string str = "Let's go to the movies ";
    std::cout << vaporcode(str);
}

